#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n, dif;
    cin >> n;
    
    vector <int> a;
    
  while(n--){
        int x;
        cin >> x;
        a.push_back(x);
  } 
 
 bool maior = 1;
  for(int i = a.size() - 1; i > 0; i--){
      if(a[i] < a[i-1] || a[i] == a[i-1]){
          maior = 0;
          cout << "No" << endl;
          return 0;
      }
      
    }

    cout << "Yes" << endl;
    
    return 0;
}

