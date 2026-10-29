#include <bits/stdc++.h>
using namespace std;


int pot(int MOD, int n){
    int r = 1;
    for(int i = 0; i < n; i++){
        r = (r * 2) % MOD;
    }
    return r;
}

int main(){
    int n;
    int MOD = 1e9 + 7;

    cin >> n;

    int r = pot(MOD, n);

    cout << r;
    
    return 0;
}