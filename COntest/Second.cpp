#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        string s;
        cin >>s;

        int ind = -1;

        for(int i = 1; i < n - 1; i++){
            if(s[i-1] == s[i+1] && s[i] != s[i-1]){
                ind = i;
                break;
            }
        }

        if(ind == -1){
            for(int i = 1; i < n - 1; i++){
                if(s[i] != s[i-1] && s[i] != s[i+1]){
                    ind = i;
                    break;
                }
            }
        }

        if(ind == -1 && n > 2){
            ind = 1; 
        }

        int cnt = 0;
        char prev = ' ';

        for(int i = 0; i < n; i++){
            if(i == ind) continue;

            if(s[i] != prev){
                cnt++;
                prev = s[i];
            }
        }
    
        cout << cnt << endl;

    }
}