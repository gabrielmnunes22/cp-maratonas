#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, sum, median, cost;

    cin >> n;

    vector<long long int> sticks(n);

    sum = 0;
    for(int i = 0; i < n; i++){
        cin >> sticks[i];
        sum += sticks[i];
    }

    sort(sticks.begin(), sticks.end());

    median = sticks[n / 2];

    cost = 0;
    for(int i = 0; i < n; i++){
        cost += abs(sticks[i] - median);
    }

    cout << cost << endl;


    return 0;
}