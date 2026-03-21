#include <bits/stdc++.h>
using namespace std;

int main(){

string stakahashi, taoki, w;
int ns, mt, q;

cin >> ns >> mt;
cin >> stakahashi;
cin >> taoki;
cin >> q;

for(int i = 0; i < q; i++){
    cin >> w;
    bool ans1=1, ans2=1;

    for(auto c:w){
        bool achou=0;
        for(auto k1:stakahashi){
            if(c == k1) achou=1;
        }
        if(achou==0) {
            // cout<<"nao achou "<<c<<" em taka\n";
            ans1=0;}
    }

    for(auto c:w){
        bool achou=0;
        for(auto k2:taoki){
            if(c == k2) achou=1;
        }
        if(achou==0) ans2=0;
    }

    if(ans1==1 && ans2==0) cout<<"Takahashi\n";
    else if(ans2==1 && ans1==0) cout<<"Aoki\n";
    else cout<<"Unknown\n";

    // cout<<"oii\n";

    // cout<<"ans1 = "<<ans1<<" "<<"ans2 = "<<ans2<<"\n";
}

   return 0; 
}
