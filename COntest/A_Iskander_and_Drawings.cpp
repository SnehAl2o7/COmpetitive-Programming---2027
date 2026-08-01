#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        string s;
        cin >>s;

        int max_len = 0;
        int len = 0;

        for(int i : s){
            if(i == '#'){
                len++;
            }else{
                max_len = max(max_len, len);
                len = 0;
            }
            max_len = max(max_len, len);
        }



        if(max_len == 0){
            cout << 0 << endl;
            continue;
        }

        //cout << max_len << endl;

        if(max_len%2 == 0){
            cout << max_len/2 << endl;
        }else{
            cout << max_len/2 + 1 << endl;
        }

    }
}