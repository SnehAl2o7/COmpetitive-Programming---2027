#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n,D;
    cin >>n>>D;

    vector<ll> v(n);
    for(int i =0;i<n;i++)cin>>v[i];

    int size = n;

    sort(v.begin(), v.end());

    int i = n-1, j=0;
    ll cnt = 0;
    while(size >0){

        if(v[i] > D){
            cnt++;
            i--;
            size--;
            continue;
        }

        int temp = v[i];
        int val = (D/temp)+1;

        j+= val-1;
        i--;
        
        if(size - val >= 0){
            cnt++;
            size -= val;
        }
        else{
            break;
        }  

    }

    cout << cnt << endl;
    
}