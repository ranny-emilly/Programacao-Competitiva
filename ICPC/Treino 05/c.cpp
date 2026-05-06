#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){
    _

    int n, x;
    cin >> n >> x;

    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    // ❌ NÃO ordenar!
    // sort(vec.begin(), vec.end());

    int l = 0;           // ponteiro esquerdo (início da janela)
    int soma = 0;        // soma da janela atual
    int result = 0;      // quantidade de subarrays válidos

    // 👉 r vai andando sozinho até o final
    for(int r = 0; r < n; r++){

        // 🔹 adiciona o elemento atual na soma da janela
        soma += vec[r];

        // 🔹 enquanto a soma passar do alvo, encolhe a janela pela esquerda
        while(soma > x){
            soma -= vec[l]; // remove o elemento da esquerda
            l++;            // move o ponteiro esquerdo
        }

        // 🔹 se bateu exatamente o valor, encontramos uma subarray válida
        if(soma == x){
            result++;

            // 👉 NÃO mexe no r
            // 👉 NÃO zera soma
            // 👉 só continua o processo normal
        }
    }

    cout << result << el;

    return 0;
}