#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;

    cin >> n >> m;

    if(n == m -1 || n == m+1){
        cout << "No";
    }else{
        cout << "Yes";
    }

    return 0;
}