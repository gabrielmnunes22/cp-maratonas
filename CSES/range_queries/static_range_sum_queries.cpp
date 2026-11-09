#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
   
    cin >> n >> q;

    vector<long long int> v(n);
    vector<long long int> prefix(n);

    cin >> v[0];
    prefix[0] = v[0];

    for(int i = 1; i < n; i++){
        cin >> v[i];
        prefix[i] = prefix[i - 1] + v[i];
    }

    long long int x1, x2;
    long long int sum;
    for(int i = 0; i < q; i++){
        cin >> x1 >> x2;
        
        if(x1 > 1){
            sum = prefix[x2 - 1] - prefix[x1 - 2];
        }else{
            sum = prefix[x2 - 1];
        }
        cout << sum << endl;
    }


    return 0;
}