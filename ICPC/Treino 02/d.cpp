#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n, dif, result = 0;
    cin >> n >> dif;
    
    for(int i = dif; i > n; i--){
        result++;
    }
    if(result == 0){
        cout << "0" << endl;
        return 0;
    }
    cout << result+1 << endl;
    
    
    return 0;
}