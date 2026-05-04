#include<bits/stdc++.h>
using namespace std;

# define ll long long

int main(){
    int t;
    cin >>t;
    while(t--){
        ll n;
        cin >>n;
        vector<ll> v(2*n);

        for(ll i = 0;i<2*n;i++){
            cin >> v[i];
        }

        unordered_map<ll, vector<ll>> mpp;

        for(ll i = 0;i<2*n;i++){
            mpp[v[i]].push_back(i);
        }

        vector<ll> max_diff;
        ll diff = 0, val = -1;

        for(auto it : mpp){
            ll dev = it.second[1] - it.second[0];
            if(diff < dev){
                diff = dev;
                val = it.first;
            }
        }

        max_diff.push_back(val);

        for(auto it: mpp){
            ll dev = it.second[1] - it.second[0];

            if(dev == diff && it.first != val){
                max_diff.push_back(it.first);
            }
        }

        ll final = max_diff[0];
        for(ll i = 0;i < max_diff.size();i++){
            if(max_diff[i] < final){
                final = max_diff[i];
            }
        }

        //cout << final << endl;

        ll i = mpp[final][0], m = mpp[final][1];

        //cout << i << " " << m <<endl;

        vector<ll> values;

        while(i <= m){
            if(v[i] != v[m]){
                break;
            }
            values.push_back(v[i]);
            i++;
            m--;
        }

        sort(values.begin(), values.end());

        ll mex;
        ll a = 0;

        // for(ll i : values){
        //     cout << i << " ";
        // }
        // cout << endl;

        for(ll i =0;i<values.size();i++){
            if(a != values[i]){
                mex = a;
                break;
            }
            a++;
        }

        if(a == values.size()){
            mex = a;
        }

        cout << mex << endl;

    }
}
