#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >>t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<pair<ll,ll>> v(n);
        
        // storing the values as per the index
        for(ll i = 0;i<n;i++){
            long long x;
            cin >> x;

            v[i] = {x,i+1};
        }

        // modifying the health bar as per the values.

        for(auto &it : v){
            it.first = it.first%k;
            if(it.first == 0){
                it.first = k;
            }
        }

        // sorting as per the value and index
        sort(v.begin(), v.end(), [&] (pair<ll,ll>a, pair<ll,ll>b){
            // sort on base of value
            if(a.first != b.first){
                return a.first > b.first;
            }
            // sort of base of index
            return a.second < b.second;
        });

        for(auto it : v){
            cout << it.second << " ";
        }

        cout << "\n";  
    }
}