#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define el "\n";

int main(){
    int n, l = 0, r = 0, maior = 0, ult = 0;

    cin >> n;

    vector<int> h;
    while(n--){
        int x;
        cin >> x;
        h.push_back(x);
    }

    if(h.size() < 2){
        cout << "0" << el;
        return 0;
    }
    if(h.size() == 2){
    for(int i = 0; i < 2; i++){
        if (h[i] > h[i+1]){
            cout << "1" << el;
            return 0;
        }else{
            cout << "0" << el;
            return 0;
        }
    }
}

    for(int i = 0; i <= h.size(); i++){
        if(h[i] > h[i+1] /*&& i != h.size()*/){
            maior ++;
            cout << h[i] << " e maior no indice: " << i << el; 

            if(i == h.size() - 1){
                if(h[i-1] > h[i]){
                    maior++;
                }
                cout << maior << el;
                return 0;
            }
        }else{
            if(i == h.size()){
                break;
            }else{
            maior = 0;
            ult = maior;
            }
        }
    }

    if(maior >= ult){
        cout << maior << el;
    }else{
        cout << ult << el;
    }




  /*   int meio;
    if(h.size()%2 != 0) {
        meio = (h.size()/2);
    }else {
        meio = ((h.size()/2) - 1);
    }
    
   
    //cout << h.size() << el;
           for(int i = meio; i <= h.size() - meio + 1; i++){
            if(h[i] >= h[i+1] && i+1 != h.size()){
                //cout << "h: \t" << h[i] << "h1: \t" << h[i+1];
                r++;
            }
        }
    

    for(int j = 0; j < meio; j++){
        if(h[j] >= h[j+1]){
            l++;
        }
    }

    //cout << l << r << el;
    if(h[meio] == h[meio + 1] && h[meio] == h[meio -1] && r == l ){
        cout << r+l << el;
    }
    else if(r >= l){
        cout << r << el;
       
    }else{
        cout << l << el;
    }
 */





    return 0;
}