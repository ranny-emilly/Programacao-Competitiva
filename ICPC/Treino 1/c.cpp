#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, controle=0;

    cin >> n;

    vector <long long> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int troca = 1;

    while(troca){
        troca = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > arr[i + 1]){
                controle = controle + (arr[i+1] - arr[i]);
                troca = 1;
            }
        }

    }
    
    cout << controle;

    return 0;
}
