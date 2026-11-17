#include<bits/stdc++.h>
#include <climits>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        string s;
        cin >>s;

        if(s[0] == '1'){
            int cnt0= 0;
            for(char c : s){
                if(c == '0')cnt0++;
            }
            cout << cnt0 << "\n";
            continue;
        }

        int cnt0=0;
        for(char c : s){
            if(c == '0')cnt0++;
        }

        ll mini_change = LONG_MAX;

        ll one_val = 0, zero_val = cnt0;

        for(int i =0;i<n;i++){

            ll cost = one_val + zero_val;

            mini_change = min(mini_change, cost);

            if(s[i] == '1')one_val++;
            else zero_val--;
        }

        mini_change = min(mini_change, one_val+zero_val);


        cout << mini_change << endl;   
    }
}