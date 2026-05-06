#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){
    _;

    int n, x;
    cin >> n >> x;

    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    
    int l = 0;           
    int soma = 0;        
    int result = 0;      

        for(int r = 0; r < n; r++){

        
        soma += vec[r];

        
        while(soma > x){
            soma -= vec[l]; 
            l++;                    }

        
        if(soma == x){
            result++;

        }
    }

    cout << result << el;

    return 0;
}