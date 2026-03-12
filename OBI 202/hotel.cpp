#include <bits/stdc++.h>
using namespace std;

int main(){

    int D, A, resul, n;

    //31 dias. Se aumentar o valor de reais, diminui os dias

    scanf("%d", &D);
    scanf("%d", &A);
    scanf("%d", &n);


    if(n == 1){
        resul = 31 * D;
    }else{
        resul = D + 14 * A;
        resul += resul * (31-n);
    }
    
    printf("%d\n", resul);


    return 0;
}