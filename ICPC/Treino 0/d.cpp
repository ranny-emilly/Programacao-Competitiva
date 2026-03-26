#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c, x, y, valora, valorb, valorab;

    cin >> a >> b >> c >> x >> y;

    valora = a*x;
    valorb = b*y;
    valorab = c*2;
    if(valora > valorab*a && valorb > valorab*b){
        if(x > y){
        cout << valorab << endl;
        }
    }else if(valora < valorab && valorb < valorab){
        cout << valora+valorb << endl;
    }

    return 0;
}