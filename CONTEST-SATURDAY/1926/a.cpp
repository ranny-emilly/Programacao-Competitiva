#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){_
    int n;

    cin >> n;
    
    
    while(n--){
     string s;
     cin >> s;
     int a = 0, b = 0 ;

     for(int i = 0; i < 5; i++){
        if(s[i] == 'A'){
            a++;
        }else{
            b++;
        }
     }

     if(a > b){
        cout << "A" << el;
     }else{
        cout << "B" << el;
     }


    }



    return 0;
}