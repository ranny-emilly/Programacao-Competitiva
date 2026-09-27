#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){_

    int n;
    cin >> n;

    while(n--){
        int a;
        cin >> a;

        int ve = a;
        bool ib = 1;

        while(ve > 0){
            if(ve%10!=0 && ve%10!=1){
                ib = 0;
                break;
            }
            ve/=10;
        }
        if(ib == 1){
            cout << "YES" << el;
            continue;
        }

        bool divide = 1;
        
        // if(a%11==0){
        //     cout << "YES";  
        // }else{
        
            while(divide){
            
                divide = 0;
                for(int i = 2; i <= a; i++){
                    bool bi = 1;
                    int x = i;

                    while(x > 0){
                        if(x%10!=0 && x%10!= 1){
                            bi = 0;
                            break;
                        }
                        x/=10;
                    }
                    // if(bi == 1){
                    //     cout << "YES" << el;
                    //     continue;
                    // }
                    if(bi == 1 && a%i == 0){
                        //cout << i << el;
                        a/=i;
                        divide = 1;
                        break;
                    }
                }
                
                // if(a == 11 || a == 10){
                    //     cout << "YES" << el;
                    //     divide = 0;
                    // }
                    // if(a%10 == 0){
                        //     a/=10;
                        //     divide =1;
                        // }
                        // if(a%11 == 0){
                            //     a/=11;
                            //     divide = 1;
                            // }
                            // else{
                                //     divide = 0;
                                // }
                                
                            }
                            if(a==1){
                                cout << "YES" << el;
                            }else{
                                cout << "NO" << el;
                            }
    }

    return 0;
}