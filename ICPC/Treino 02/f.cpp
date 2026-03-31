#include <bits/stdc++.h>
using namespace std;

int main(){
    
   int n;
   
   cin >> n;
   
   vector <int> cubos;
   
   while(n--){
       int y;
       cin >> y;
       cubos.push_back(y);
   }
   sort(cubos.begin(), cubos.end());
   
   for(int i = 0; i <cubos.size(); i++){
       cout << cubos[i] << " ";
   }
   
   cout << "\n";
    
  
            
    return 0;
}