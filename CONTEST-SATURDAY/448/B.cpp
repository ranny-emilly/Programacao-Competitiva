#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main(){
int npratos, mpimenta, total=0;

    cin >> npratos >> mpimenta;
    
    vector<int> climite(mpimenta);
    vector<int> bgramas(npratos), tipoa(npratos);

    for(int i = 0; i < mpimenta; i++){
        cin >> climite[i];
    }
    for(int i = 0; i < npratos; i++){
        cin >> tipoa[i] >> bgramas[i];
            if(bgramas[i] <= climite[tipoa[i]]){
             climite[tipoa[i]] -= bgramas[i];
             total+=bgramas[i];
             }else{
                while(climite[tipoa[i]] < bgramas[i]){
                    if(climite[tipoa[i]] <= 0){
                         climite[tipoa[i]] --;
                        total = total +1;
                    }else{
                        break;
                    }
               
            } 

        }
            
    }

     cout << total << el;
    return 0;
}