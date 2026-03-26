#include <bits/stdc++.h>
using namespace std;

int main(){

   string s, s2;

   cin >> s;
   cin >> s2;

   sort(s.begin(), s.end());
   sort(s2.begin(), s2.end());
   
if(s == s2){
    cout << "0" << endl;
}else if(s > s2){
    cout << "1" << endl;
}else{
    cout << "-1" << endl;
}
    

    return 0;
}