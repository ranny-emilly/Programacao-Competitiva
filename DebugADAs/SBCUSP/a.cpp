#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie;

int main(){

    int n, m;
    cin >> n >> m;

    vector<pair<int, int>>boates(n);

    for(int i = 0; i < n; i++){
        cin >> boates[i].first >> boates[i].second;
    }

    while(m--){
        int w, re;
        cin >> w >> re;

        int l = 0, r = n;

        while(l < r){
            int mid = l + (r-l)/2;

            if(boates[mid].first <= w){
                r = mid;
            }else{
                l = mid+1;
            }
        }

        int resp = -1;

        for(int i = l; i < n; i++){
            if(boates[i].second != re){
                resp = i+1;
                break;
            }
        }

        cout << resp << el;
    }


    return 0;
}
