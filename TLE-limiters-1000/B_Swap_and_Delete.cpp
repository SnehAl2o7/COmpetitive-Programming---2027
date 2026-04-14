#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t ;
    while(t--){
        string s;
        cin >> s;
        
        int n = s.size();

        int cnt0 = 0, cnt1 = 0;
        for(char c : s){
            if(c == '0') cnt0++;
            else cnt1++;
        }

        int t = 0;

        for(int i = 0;i < n;i++){
            if(s[i] == '0' && cnt1 > 0){
                cnt1--;
                t++;
            }
            else if(s[i] == '1' && cnt0 > 0){
                cnt0--;
                t++;
            }
            else break;
        }


        cout << n - t << endl;

    }
}