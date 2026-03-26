#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        int t = 0;
        cin >> t;

        map<int, int>m;
        int num;

        for(int j = 0; j < t; j++){
            cin >> num;
            m[num]++;
        }
         bool ordena = 1;
         while(t--){
        if(m[num] != 1 && m[num]!= 0){
            ordena = 0;
            cout << "No" << endl;
            break;
        }else{
           ordena = 1;
        }
    }
     if(ordena == 1){
        cout << "Yes";
    }   
    }

    return 0;
}