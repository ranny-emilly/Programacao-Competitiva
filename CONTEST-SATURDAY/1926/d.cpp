#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);


int main(){_

    //usar map p guardar num e o inv;

    int n;
    cin >> n;

    while(n--){
        int a;
        cin >> a;
        vector<int>vec(a);

        for(int i = 0; i < a; i++){
            cin >> vec[i];
        }

        int conj = 0;
        int ext = vec[0]&vec[vec.size()-1];
        if(ext > 0){
                conj++;

            }

        if(vec.size() > 2){
            for(int i = 0; i < a-1; i++){
                int b = vec[i]&vec[i+1];
                //cout << vec[i] << "&"<< vec[i+1] << " = " << a << el;
                if(b > 0){
                    conj++;
    
                }
            }
        }

        cout << conj << el;
        conj = 0;
    }


    return 0;
}
