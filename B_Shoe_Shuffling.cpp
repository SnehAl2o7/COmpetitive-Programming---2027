#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n);
        for(int i =0;i<n;i++)cin>>v[i];

        vector<pair<ll,ll>> range;

        ll curr =v[0];
        int start = 0;
        range.push_back({0,0});
        

        for(int i =1;i<n;i++){
            if(v[i] == curr){
                range.back().second = i;
            }else{
                curr = v[i];
                range.push_back({i,i});
            }
        }

        vector<ll> order;
        bool check = 0;
        for(auto it : range){
            ll i = it.second, j = it.first;
            if(i == j){
                cout << -1 << endl;
                check = 1;
                break;
            }

            order.push_back(i+1);
            i--;
            while(j <= i){
                order.push_back(j+1);
                j++;
            }
        }

        if(check){
            continue;
        }

        for(int i : order){
            cout << i << " ";
        }
        cout << "\n";

    }
}