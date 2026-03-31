#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n, dif;
    cin >> n;
    
    set <int> a;
    
  for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.insert(x);
  } 
    /*sort(a.begin(), a.end());
    
    if(a. size() == 1){
        cout << "0" << endl;
        return 0;
    }
    
    for(int i = n-1; i >= 0; i--){
        if(i != 0 && a[i] == a[i-1]){
            a.erase(a.begin() + 1);
        }
    }*/
        cout << a.size() << endl;

   
    
    return 0;
}