#include <bits/stdc++.h>
using namespace std;

int main(){
    string s2;
    char caractere;
    
    vector<char> s;
    
    while(cin.get(caractere) && caractere != '\n'){
        s.push_back(caractere);
    }
     sort(s.begin(), s.end());

    for(int i = 0; i < s.size(); i++){
        if(s[i]!=s[i+1]){
            s2.push_back(s[i]);
        }
    }
     
    if(s2.size()%2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }
    
   

    return 0;
}