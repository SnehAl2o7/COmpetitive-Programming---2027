#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k,b,s;
        cin >> n>>k>>b>>s;

        if(s < b*k || s > (b*k + n * (k-1))){
            cout << -1 << endl;
            continue;
        }

        vector<ll> v(n,0);

        v[0] = b * k;
        s -= b * k;

        for (int i = 0; i < n && s > 0; i++) {
            ll add = min(s, k - 1);
            v[i] += add;
            s -= add;
        }

        for(ll i : v){
            cout << i << " ";
        }
        cout << "\n";
    }
}