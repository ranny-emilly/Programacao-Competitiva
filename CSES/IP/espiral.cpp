//se x é maior ou igual a x e y é par, cout y^2
//se y é par - primeira linha é igual a y^2
//se y é ,aior que x e y é par, cout y^2-(x+1)
//se y for impar, é (y-1)^2+x
//se x > y e x é impar && x%2!=0, x^2-(y-1) - > x^2 - y+1
//se x for par e x > y: (x-1)^2+y

#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

int main(){

    ll n;
    cin >> n;

    while(n--){
        ll y, x;
        cin >> y >> x;

        if( y >= x && y%2==0){
            cout << y*y-x+1;
        }else if(y >= x && y%2 != 0){
            cout << ((y-1)*(y-1))+x;
        }else if(x > y && x%2==0){
            cout << ((x-1)*(x-1))+y;
        }else{
            cout << x*x-y+1;
        }
        cout << el
    }

    return 0;
}
