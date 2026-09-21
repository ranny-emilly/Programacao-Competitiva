#include <bits/stdc++.h>
using namespace std;

#define el "\n";
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int MAX = 10e5+1;
vector<int>prefix(MAX);

int main(){_
     int n;
     int sum = 0;
     cin >> n;


     for(int i = 1; i <= MAX; i++){
         if(i > 9){
             int temp = i;
             while(temp > 0){
                 sum+=temp%10;
                 temp= temp/10;
             }
         }else{
             sum+=i;
         }
         prefix[i] = prefix[i-1] + sum;
         sum = 0;
    }

     while(n--){
        int c;
        cin >> c;
        cout << prefix[c] << el;
        }
    

     /*7
12
1
2
3
1434
2024
200000

51
1
3
6
18465
28170
4600002

*/


    return 0;
}