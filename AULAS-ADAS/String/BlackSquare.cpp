#include <bits/stdc++.h>
using namespace std;

int main(){
int p, q, x, y;

cin >> p, cin >> q;
cin >> x, cin >> y;

if (x >= p && x <= p + 99 && y >= q && y <= q+99) {
    cout << "Yes";
}else {
    cout << "No";
}

   return 0; 
}