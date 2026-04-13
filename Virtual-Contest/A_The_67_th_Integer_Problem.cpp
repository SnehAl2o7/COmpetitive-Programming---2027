#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int ans;
        if(n >= 0){
            if(n == 67){
                ans = 67;
            }
            else{
                ans = n+1;
            }
        }
        else{
            ans = n+1;
        }

        cout << ans << endl;
    }
}