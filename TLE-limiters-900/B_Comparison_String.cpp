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

        // vector<int> v(n+1,0);

        // v[0] = 1;
        // int cnt = 1;
        // int i = 1;
        // for(char c : s){
        //     if(c == '<'){
        //         v[i] = ++cnt;
        //     }else{
        //         v[i] = --cnt;
        //     }
        //     i++;
        // }

        // unordered_map<int,int> mpp;
        // for(int i: v){
        //     mpp[i]++;
        // }

        // cout << mpp.size() <<endl;


        long long len = 0;
        long long cnt = 1;

        for(int i = 0;i < n-1;i++){
            if(s[i] == s[i+1]){
                cnt++;
            }
            else{
                len = max(len,cnt);
                cnt = 1;
            }
        }

        len = max(len,cnt);

        cout << len + 1 << endl;

    }
}