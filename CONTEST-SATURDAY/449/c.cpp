#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, s, q, iguais = 0;
    
    map<char, int> m;
    char g;

    cin >> n >> s >> q;

    for(int i = 0; i < n; i++){
        cin >> g;
        m[g]++;
    }
  
    for (auto const& [g, qtd] : m) {
    if (qtd%2 == 0) {
        iguais = iguais+(qtd/2);
    }
}
    cout << iguais << endl;




    return 0;
}