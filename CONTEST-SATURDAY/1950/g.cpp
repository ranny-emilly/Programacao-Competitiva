#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){_

    int n;
    cin >> n;

    while(n--){
        int a = 0;
        int apaga = 0;
        cin >> a;

        string typehipe;
        vector<string>stg(a);
        vector<string>mus(a);
        int maior = 1;
        for(int i = 0; i < a; i++){
            cin >> stg[i] >> mus[i];
        }

        sort(stg.begin(), stg.end());
        sort(mus.begin(), mus.end());

        for(int i = 0; i < a; i++){
            if(i == 0){
                if(stg[i] != stg[i+1] && mus[i]!=mus[i+1]){
                    apaga++;
                }
            }else if(i == a-1){
                if(stg[i]!= stg[i-1] && mus[i]!=mus[i-1]){
                    apaga++;
                }
            }else{
                if(stg[i] != stg[i+1] && mus[i]!=mus[i+1] && stg[i]!= stg[i-1] && mus[i]!=mus[i-1]){
                    if(mus[i].size() != 0 && mus[i+1].size() != 0 && stg[i].size()!=0 && stg[i+1].size()!= 0){
                        apaga++;

                    }
                }
            }

            if(apaga > maior){
                maior = apaga;
                //cout << "maior " << maior;
            }
        }

        if(a == 1){
            cout << "0" << el;
        }else{
            cout << apaga << el;
        }


    }

    return 0;
}