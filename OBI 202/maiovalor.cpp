#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m, s, c, d, u;

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &s);

    for(int i = m; i > n; i--){
        if(i%s == 0){
        c = i/100;
        d = (i - c*100)/10;
        u = (c*100) + (d*10) - i;
        
        if(c+d+u == s){
            printf("%d", i);
            return 0;
            }
        
        }

    }
    printf("-1");

    return 0;
}