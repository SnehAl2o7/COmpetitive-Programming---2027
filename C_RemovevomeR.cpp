#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >>n;
        string s;
        cin >>s;

        if(n == 1){
            cout << 1 << endl;
            continue;
        }

        bool ch = 1;
        int mid = 0;

        for(int i=0;i<n-1;i++){
            if(s[i] != s[i+1]){
                mid = i;
                break;
            }
        }

        for(int i = mid+1;i<n;i++){
            if(s[i] == s[0]){
                ch = 0;
                break;
            }
        }

        if(ch) cout << 2 << endl;
        else cout << 1 << endl;
        

        
    }
}