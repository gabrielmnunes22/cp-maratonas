#include <bits/stdc++.h>
using namespace std;

int main(){
    // n = number of applicants, m = number of apartments and k = maximum allowed difference
    int n, m, k;       
    vector<int> desired_size;   // desired apartment size
    vector<int> size;
    int target;

    int a, b;

    cin >> n >> m >> k;

    for(int i = 0; i < n ; i++){
        cin >> a;
        desired_size.push_back(a);
    }  
    
    for(int j = 0; j < m; j++){
        cin >> b;
        size.push_back(b);
    }

    sort(desired_size.begin(), desired_size.end());
    sort(size.begin(), size.end());

    int counter = 0;
    int i = 0;
    int j = 0;

    while(i < m && j < n){
        target = size[i];
        //cout << "target: " << target << endl;
        //cout << "desidered_size[j]: " << desired_size[j] << endl;

        if(target > desired_size[j] && abs(target - desired_size[j]) > k ){
            j++;
        }else{
            if(abs(target - desired_size[j]) <= k){
                //cout << "entrou" << endl;
                counter++;
                j++;
            }
            i++;
        }

        //cout << endl;
    }

    cout << counter << endl;
  
    return 0;
}