#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;

        vector<int> v(n);
        for(int i = 0;i < n;i++) cin >> v[i];

        long long ans = INT_MAX;
        long long even = 0;

        for(int i = 0;i <n;i++){
            if(v[i]%2 == 0){
                even++;
            }
            if(v[i]%k == 0){
                ans = 0;
            }

            ans = min(ans, (k- v[i]%k));
        }

        // for 4 special case 

        if(k == 4){
            if(even >= 2){
                ans = min(ans,0LL);
            }
            else if(even == 1){
                ans = min(ans,1LL);
            }
            else if(even == 0){
                ans = min(ans,2LL);
            }
        }

        cout << ans << endl;
        
    }
}