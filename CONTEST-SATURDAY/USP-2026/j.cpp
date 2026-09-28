#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){
    int x = 0, n, par = 0, inter = 0, maxi = 0;
    
    cin >>n;
    int vec[n];

    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    for(int i = 0; i < n; i++){
        if(vec[i]%2 != 0 && vec[i+1]%2 != 0){
            inter++;
        }else if(vec[i]%2 == 0){
            par++;
        }else{
            if (inter > maxi)maxi = inter;
            inter = 1;
        }
       
        
    }
    cout << par+maxi;
   
    cout << el;

    return 0;
}