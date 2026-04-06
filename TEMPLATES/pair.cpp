#include <bits/stdc++.h>
using namespace std;

int main(){

    // criando um pair
    pair<int, int> p = {10, 20};

    cout << p.first << " " << p.second << endl;

    // usando vector de pair
    vector<pair<int,int>> v;

    v.push_back({1, 100});
    v.push_back({2, 200});
    v.push_back({3, 300});

    // percorrendo com auto
    for(auto &it : v){
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}