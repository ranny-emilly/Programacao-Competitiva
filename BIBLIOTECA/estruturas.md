# Estruturas de dados

Estes tópicos são complementos intermediários/avançados; ainda não encontrei implementações locais de DSU, Fenwick ou Segment Tree nos templates auditados. Os snippets abaixo são novos e estão aqui para estudo, não são apresentados como código que você já usa.

## DSU (Union-Find)

Mantém componentes que só se unem. `find` com compressão de caminho e união por tamanho têm custo amortizado `O(α(n))` por operação, praticamente constante. Não serve para remover arestas ou manter conectividade histórica sem técnicas adicionais.

```cpp
struct DSU {
    vector<int> pai, tamanho;
    DSU(int n) : pai(n), tamanho(n, 1) { iota(pai.begin(), pai.end(), 0); }
    int find(int x) { return pai[x] == x ? x : pai[x] = find(pai[x]); }
    bool unite(int a, int b) {
        a = find(a); b = find(b);
        if (a == b) return false;
        if (tamanho[a] < tamanho[b]) swap(a, b);
        pai[b] = a; tamanho[a] += tamanho[b];
        return true;
    }
};
```

## Fenwick Tree

Armazena somas de prefixo com atualização pontual em `O(log n)`, usando índices internos começando em 1. Soma de intervalo `[l,r]` é `sum(r)-sum(l-1)`. Para soma e atualização, valores podem ser negativos; encontrar k-ésimo por descida exige condições adicionais, como frequências não negativas.

```cpp
struct Fenwick {
    int n; vector<long long> bit;
    Fenwick(int n) : n(n), bit(n + 1, 0) {}
    void add(int i, long long delta) { for (; i <= n; i += i & -i) bit[i] += delta; }
    long long sum(int i) const {
        long long ans = 0;
        for (; i > 0; i -= i & -i) ans += bit[i];
        return ans;
    }
    long long range_sum(int l, int r) const { return sum(r) - sum(l - 1); }
};
```

## Segment Tree

Use quando há atualizações e consultas em intervalos, ou quando a operação não é coberta por Fenwick. Para soma, construção `O(n)`, consulta e atualização pontual `O(log n)`, memória `O(n)` (vetor `4*n` é um limite prático comum). Identidade da soma é zero; para mínimo é `INF`.

```cpp
struct SegTree {
    int n; vector<long long> tree;
    SegTree(const vector<long long> &a) : n((int)a.size()), tree(4 * n) { build(1, 0, n - 1, a); }
    void build(int p, int l, int r, const vector<long long> &a) {
        if (l == r) { tree[p] = a[l]; return; }
        int m = l + (r - l) / 2;
        build(2*p, l, m, a); build(2*p+1, m+1, r, a);
        tree[p] = tree[2*p] + tree[2*p+1];
    }
    void set_value(int i, long long x, int p, int l, int r) {
        if (l == r) { tree[p] = x; return; }
        int m = l + (r - l) / 2;
        if (i <= m) set_value(i, x, 2*p, l, m);
        else set_value(i, x, 2*p+1, m+1, r);
        tree[p] = tree[2*p] + tree[2*p+1];
    }
    long long query(int a, int b, int p, int l, int r) const {
        if (b < l || r < a) return 0;
        if (a <= l && r <= b) return tree[p];
        int m = l + (r - l) / 2;
        return query(a, b, 2*p, l, m) + query(a, b, 2*p+1, m+1, r);
    }
};
```

Este exemplo pressupõe `n > 0` e índices `0..n-1`; envolva as chamadas para reduzir parâmetros e valide índices na solução do problema. Alterar uma posição custa `O(log n)`; uma consulta inclusiva `[l,r]` também.

### Exercícios

- [CSES — Dynamic Range Sum Queries](https://cses.fi/problemset/task/1648/)
- [CSES — Hotel Queries](https://cses.fi/problemset/task/1143/)
- [CSES — Road Construction](https://cses.fi/problemset/task/1676/)
