#include <bits/stdc++.h>
using namespace std;

int main(){
    long int n;

    cin >> n;

    while(n != 1){
        
        cout << n << " ";
        
        // n is even
        if(n % 2 == 0){
            n /= 2;
        }
        // n is odd
        else{          
            n =  n * 3 + 1;
        }
    }

    cout << "1" << endl;


    return 0;
}

