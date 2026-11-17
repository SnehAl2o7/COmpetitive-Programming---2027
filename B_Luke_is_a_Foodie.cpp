#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
    ll x;
    cin >>n >>x;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    ll new_min = v[0]-x, new_max=v[0]+x;

    ll cnt = 0;

    for(int i =1;i<n;i++){
        ll curr_min = v[i]-x, curr_max = v[i]+x;
        new_min = max(curr_min, new_min);
        new_max = min(curr_max, new_max);

        if(new_min <= new_max){
            continue;
        }else{
            new_min = curr_min, new_max = curr_max;
            cnt++;
        }
    }

    cout << cnt << endl;

    }


    
}