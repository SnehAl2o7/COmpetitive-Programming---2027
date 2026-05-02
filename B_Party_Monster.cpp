#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        long long cnt1 = 0;
        long long cnt2 = 0;

        for(int i =0;i<n;i++){
            if(s[i] == '('){
                cnt1++;
            }
            else{
                cnt2++;
            }
        }

        if(cnt1 == cnt2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}