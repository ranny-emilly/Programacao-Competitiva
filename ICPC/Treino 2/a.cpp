#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, y, troca = 0, cont = 1;

    cin >> n;
    y = n;
    vector <int> num(n);

    while(n--){
        int x;
        cin >> x;
        num[n]=x;
      
    }

    sort(num.begin(), num.end());

    for(int i = num.size(); i >= 2; i--){
        if(num[i-2] == num[i-1]){
            cont ++; 
        }
        else{
        if(cont == num[i - 1]){
                troca+=0;
            }else if(cont > num[i - 1]){
                troca += cont-num[i - 1];
            }else{
                troca += cont;
            }
            cont = 1;
        
    }
}

    if(num[0] == cont){
        troca+=0;
    }else if(cont > num[0]){
        troca += cont-num[0];
    }else{
        troca += cont;
    }
           
    cout << troca << endl;



    return 0;
}