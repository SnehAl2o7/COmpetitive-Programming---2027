#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> v(n);
        for(int i = 0;i<n;i++) cin >> v[i];

        vector<long long> ans= {v[0]};
        
        for(int i = 1;i<n;i++){
            if(v[i] < v[i-1]){
                ans.push_back(v[i]);
                ans.push_back(v[i]);
            }
            else{
                ans.push_back(v[i]);
            }

            if(ans.size() > 2*n)break;
        }

        cout << ans.size() << endl;

        for(int i : ans){
            cout << i << " ";        }

        cout << endl;

    }
}