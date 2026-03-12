#include <bits/stdc++.h>
using namespace std;

int main(){

    long long ncopos, amldeliquido, ksaquedearroz, xmlnecessario, somaml = 0, controle = 0, controle2 = 0;

    cin >> ncopos >> ksaquedearroz >> xmlnecessario;

    for(int i = 0; i < ncopos; i++){
        cin >> amldeliquido;
        somaml += amldeliquido;
        if(amldeliquido > xmlnecessario){
        controle++;
        }else if( somaml >= xmlnecessario){
            controle2++;
        }
    }
        if(somaml/ksaquedearroz == xmlnecessario){
            cout << ncopos;
        }else if(controle+controle2 > ksaquedearroz){
            cout << controle+controle2-1 << endl;
    }else if(controle2 >= ksaquedearroz){
            cout << controle2+ksaquedearroz - 1<< endl;
    }
    
    else{
            cout << "-1" << endl;
        
    }
        

    return 0;
}
