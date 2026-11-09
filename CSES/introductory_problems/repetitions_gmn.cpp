#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    char curr, next;

    cin >> s;

    int counter = 1;
    int max_seq = 1;

    for(int i = 0; i < s.length() - 1; i++){
       curr = s[i];
       next = s[i + 1]; 

       if(curr == next){
            counter++;
            if(counter > max_seq){
                max_seq = counter;
            }
       }else{
            counter = 1;
       }
    }

    cout << max_seq << endl;

    return 0;
}