#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){

int n, x, soma = 0, result = 0;

cin >> n >> x;
vector <int> vec;

while(n--){
    int y;
    cin >> y;
    vec.push_back(y);

}

int l = 0, r = vec.size()-1;
sort(vec.begin(), vec.end());



while(r > l){

    soma = vec[r];
    if(soma == x){
        l++;
        result++;        
        cout << soma << vec[l] << el;

    }else if(soma > x){
        soma-=vec[r];
        r--;
    }else if(soma < x){
        soma+=vec[l];
        l++;
    }

}
    cout << result << el;




    return 0;
}