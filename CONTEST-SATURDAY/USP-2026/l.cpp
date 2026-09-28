#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){

    int n, eng = 1;
    cin >> n;
    vector<int>vec;


    while(n--){
        int a;
        cin >> a;
        vec.push_back(a);
    }

    sort(vec.begin(), vec.end());

    //1 1 1 1
    
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] == vec[i+1]){
            if(vec[i] != vec[i-i]){
                eng++;
            }
            eng++;
        }
    }

 if(eng == 1){
    cout << 0 << el; 

    }else{
    cout << eng << el;

    }

    
    return 0;
}