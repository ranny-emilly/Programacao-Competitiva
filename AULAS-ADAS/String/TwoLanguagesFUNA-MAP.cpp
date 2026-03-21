#include <bits/stdc++.h>
using namespace std;

int main(){

string stakahashi, taoki, w;
int ns, mt, q;

cin >> ns >> mt;
cin >> stakahashi;
cin >> taoki;
cin >> q;

map < char, int > alfabeto1, alfabeto2;

// for (int i = 0; i < stakahashi.size(); i++)
// {
//     alfabeto1[stakahashi[i]] = 1;
// }

for (auto k1:stakahashi)
{
    alfabeto1[k1] = 1;
}
for (auto k2:taoki)
{
    alfabeto2[k2] = 1;
}

for(int i = 0; i < q; i++){
    cin >> w;
    bool ans1=1, ans2=1;

    for(auto c:w){
        if(alfabeto1[c] == 0) ans1=0;
    }
    for(auto c:w){
        if(alfabeto2[c] == 0) ans2=0;
    }
    

    if(ans1==1 && ans2==0) cout<<"Takahashi\n";
    else if(ans2==1 && ans1==0) cout<<"Aoki\n";
    else cout<<"Unknown\n";

    // cout<<"oii\n";

    // cout<<"ans1 = "<<ans1<<" "<<"ans2 = "<<ans2<<"\n";
}

   return 0; 
}
