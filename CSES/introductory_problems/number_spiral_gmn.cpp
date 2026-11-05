#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    ll int y, x, max_num, min_num, ref;
    bool sum;

    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> y >> x;
        
        max_num = max(y, x);
    
        sum = true;

        // row > col
        if(y > x){
            min_num = x;
            // even row
            if(max_num % 2 == 0){
                ref = max_num * max_num;
                sum = false;
            }else{
                ref = (max_num - 1) * (max_num - 1) + 1;
            }

        }else{
            min_num = y;
            // even col
            if(max_num % 2 == 0){
                ref = (max_num - 1) * (max_num - 1) + 1;
            }else{
                ref = max_num * max_num;
                sum = false;
            }
        }

        if(sum){
            ref += (min_num - 1); 
        }else{
            ref -= (min_num - 1);
        }

        /*
        while(min_num > 1){
            if(sum){
                ref++;
            }else{
                ref--;
            }
            min_num--;
        }
        */
       
        cout << ref << endl;
    }

    return 0;
}