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

        int cnt = 0;
        int three_cnt = 0;
        for(int i = 1;i < n-1;i++){
            
            if(s[i] == s[i-1] && s[i] == s[i+1] && s[i] == '.'){
                three_cnt = 1;
                break;
            }
        }

        for(char c : s){
            if(c == '.')cnt++;
        }
        
        if(three_cnt){
            cout << int(2) <<endl;
        }
        else{
            cout << cnt << endl;
        }

    }
}