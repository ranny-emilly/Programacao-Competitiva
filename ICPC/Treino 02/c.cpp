#include <bits/stdc++.h>
using namespace std;


int main(){

int n, k;

cin >> n >> k;
vector <int> a;

int f = n;

while(f--){
    int x;
    cin >> x;
    a.push_back(x);
}
vector<int> b = a;

sort(b.begin(), b.end());

/* bool consigo = 0; */
    for(int i = 0; i < k; i++){
        vector<int> indicea, indiceb;

        for(int j = i; j < n; j+=k){
            indicea.push_back(a[j]);
            indiceb.push_back(b[j]);
        }
        sort(indicea.begin(), indicea.end());
        sort(indiceb.begin(), indiceb.end());

        if(indicea != indiceb){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    
    return 0;
}