#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define el "\n";

int main(){

   int n, m, k, jogador;

   cin >> n >> m >> k;

   m +=1;
   n-=1;

   for(int i = 1; i < m; i++){
    cin >> jogador;
   }

   //transformar em bin, comparar bit a bit e se a diferença de bits for <= k, então é amigo.

    return 0;
}

/* 
F (string alternada) OK
D (sudoku) - 
B (fedor)
A (bits ímpar/par)
E (xor fibonacci) */