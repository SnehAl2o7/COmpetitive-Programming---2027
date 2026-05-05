#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        vector<ll> one_min, two_min;

        while(n--){
            int m;
            cin >>m;
            vector<ll> v(m);
            for(int i = 0;i<m;i++) cin >> v[i];

            sort(v.begin(), v.end());
            one_min.push_back(v[0]);
            two_min.push_back(v[1]);
        }

        ll sum = 0;
        ll min_val = INT_MAX;

        for(ll i : two_min){
            sum += i;
            min_val = min(i,min_val);
        }

        sum -= min_val;
        sum += *min_element(one_min.begin(), one_min.end());

        cout << sum << endl;
    }
}