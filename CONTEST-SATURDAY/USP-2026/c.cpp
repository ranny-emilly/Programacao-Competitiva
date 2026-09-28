#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){

    string s;

    cin>>s;
    int c = 1;

    for(int i = 0; i < s.size();i++){
        if(s[i]==s[i+1]){
            c++;
        }
        else{
            if(c == 1){
                cout << s[i];
            }else{
                cout << s[i] << c;
                c = 1;
            }
        }
    }

    cout << el;

    return 0;
}