#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        vector<ll> a(n), b(n);
        for(int i=0;i<n;i++)cin >>a[i];
        for(int i=0;i<n;i++)cin >>b[i];


        vector<ll> diff(n);
        for(int i=0;i<n;i++){
            diff[i] = b[i]-a[i];
        }

        bool check =0;

        ll tot_sum = 0;

        for(int i=0;i<n;i++){
            tot_sum += diff[i];
            if(tot_sum < 0){
                check = 1;
                break;
            }

        }
        if(!check)cout <<"YES\n";
        else cout <<"NO\n";

    }
}