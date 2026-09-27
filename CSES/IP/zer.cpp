#include <bits/stdc++.h>
using namespace std;

//time limit nao se inspire está em modificacoes
 
#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){_
    int n;
    cin >> n;

    long long fat = 1;

    for(int i = n; i > 0; i--){
        fat*=i;
    }

    string s = to_string(fat);
    long long zero = 0;
    cout << fat << el;
    for(int i = s.size(); i > 0; i--){
        if(s[i] == '0' && s[i-1] == '0'){
            zero++;
        }
    }

    cout << zero << el;

    return 0;
}