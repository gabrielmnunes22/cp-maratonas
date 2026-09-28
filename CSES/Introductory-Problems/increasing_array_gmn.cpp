#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long int curr, next;
    long long int dist;
    
    cin >> n;

    vector<long long int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    dist = 0;

    for(int i = 0; i < n - 1; i++){
        curr = v[i];
        next = v[i + 1];

        if(curr > next){
            dist += curr - next;
            v[i + 1] = curr; 
        }
    }

    cout << dist << endl;

    return 0;
}