#include <bits/stdc++.h>
using namespace std;
 
#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
int main(){
   _
    int n;
    cin >> n;
 
    while(n--){
        vector<int>vec(7);
        for(int i = 0; i < 7; i++){
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        int sum = 0;
        for(int i = 0; i < 6; i++){
            sum+= vec[i]*-1;   
        }
        sum +=vec[vec.size()-1];
        cout << sum << el;
    }
 
 
    return 0;
}
