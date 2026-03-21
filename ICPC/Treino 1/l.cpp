#include <bits/stdc++.h>
using namespace std;

int main(){

    int t, n, cont = 1;

    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;
        vector <int> a(n);
        vector <int> b();
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
            if(a[i+1] == a[i]+1){
                b[i] = b[i+1];
                cont++;         
        }
        for(int i = 0; i < b.size(); i++){
            if(a[i] == a[i+1]+1){
                cont++;
            }
        }
         cout << cont;
    }


   return 0; 
}