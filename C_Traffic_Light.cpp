#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        char c;
        cin >>c;
        string s;
        cin >> s;

        int last_g = n;
        int cnt = 0;

        s += s;

        if(c == 'g'){
            cout << 0 << endl;
            continue;
        }

        for(int i =2*n-1;i>=0;i--){
            if(s[i] == 'g'){
                last_g = i;
            }

            if(s[i] == c){
                cnt = max(cnt , last_g-i);
            }
        }

        cout << cnt << endl;
    }
}