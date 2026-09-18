#include <bits/stdc++.h>
using namespace std;
 
#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
int main(){
   _
    int n;
 
    cin >> n;
 
    while(n--){
        int maior = 0;
        int a;
        cin >> a;
        vector<int>vec(a);
        for(int i = 0; i < a; i++){
            cin >> vec[i];
        }
        int sum = 0;
        for(int i = vec.size()-1; i > 0; i--){
            for(int j = i - 1; j > -1; j--){
                sum = vec[i] ^ vec[j];
                //cout << vec[i] << " + " << vec[j] << " xor = "<< sum << el;
                if(sum > maior){
                    maior = sum;
                    //cout << maior << el;
                }
            }
        }
        cout << maior << el;
    }
 
    return 0;
}
