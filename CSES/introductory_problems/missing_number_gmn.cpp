#include <bits/stdc++.h>
using namespace std;

int main(){
    long int n, num;
    vector<long int> v;

    cin >> n;

    for(int i = 0; i < n - 1; i++){
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    for(int i = 1; i <= n; i++){
        if(v[i - 1] != i){
            cout << i;
            break;
        }
    }

    return 0;
}