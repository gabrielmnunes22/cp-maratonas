#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;

    vector<int> v(n);
    vector<int> vPerm;

    for(int i = 0; i < n; i++){
        v[i] = i + 1;
    }

    if(v.size() == 2 || v.size() == 3){
        cout << "NO SOLUTION" << endl;
    }else{

        // even numbers
        for(int i = 0; i < n; i++){
            if(v[i] % 2 == 0){
                vPerm.push_back(v[i]);
            }
        }

        // odd numbers
        for(int i = 0; i < n; i++){
            if(v[i] % 2 != 0){
                vPerm.push_back(v[i]);
            }
        }

        for(int i = 0; i < vPerm.size(); i++){
            cout << vPerm[i] << " ";
        }
        cout << endl;
    }
   

    return 0;
}