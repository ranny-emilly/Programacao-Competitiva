#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define el '\n';

const int MAXN = 200005;

int n, q;
int cartas[MAXN];
int seg[4 * MAXN];

// Retorna a posição do maior elemento
int melhor(int a, int b) {
    if (a == -1) return b;
    if (b == -1) return a;

    if (cartas[a] > cartas[b])
        return a;

    return b;
}

// Constrói a Segment Tree
void build(int no, int l, int r) {

    if (l == r) {
        seg[no] = l;
        return;
    }

    int meio = (l + r) / 2;

    build(no * 2, l, meio);
    build(no * 2 + 1, meio + 1, r);

    seg[no] = melhor(seg[no * 2], seg[no * 2 + 1]);
}

// Consulta a posição do maior elemento em [ql, qr]
int query(int no, int l, int r, int ql, int qr) {

    // Não existe interseção
    if (r < ql || l > qr)
        return -1;

    // Intervalo completamente dentro da consulta
    if (ql <= l && r <= qr)
        return seg[no];

    int meio = (l + r) / 2;

    int esquerda = query(no * 2, l, meio, ql, qr);
    int direita = query(no * 2 + 1, meio + 1, r, ql, qr);

    return melhor(esquerda, direita);
}

int main() {
    _

    cin >> n >> q;

    for (int i = 1; i <= n; i++) {
        cin >> cartas[i];
    }

    build(1, 1, n);

    while (q--) {

        int l, r;
        cin >> l >> r;

        // Posição do maior elemento do intervalo
        int posmax = query(1, 1, n, l, r);

        // Tamanho do intervalo
        int tamanho = r - l + 1;

        // Reginaldo:
        // 1. intervalo tem tamanho ímpar
        // 2. máximo não está em uma das pontas
        if (tamanho % 2 == 1 &&
            posmax > l &&
            posmax < r) {

            cout << "Reginaldo" << el;

        } else {

            cout << "Adilson" << el;
        }
    }

    return 0;
}