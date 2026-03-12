#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, result = 0;

    cin >> n;
    

    if(n % 2 != 0){
    result = 3*n+1;
            for(int i = n/2; result !=1; i--){
                result = n/2;
                n-= result;
                cout << result << "\t";
            }
    }else{
        for(int i = n/2; result !=1; i--){
            result = n/2;
            n-= result;
           cout << result << "\t";
        }
    }

    return 0;
}