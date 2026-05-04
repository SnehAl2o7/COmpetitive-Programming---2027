#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i =0;i<n;i++) cin >> v[i];

        int mini = v[0], mex = v[0];

        for(int i = 0;i<n;i++){
            mex = max(mex,v[i]);
            mini = min(mini,v[i]);
        }

        cout << mex - mini << endl;
    }
}