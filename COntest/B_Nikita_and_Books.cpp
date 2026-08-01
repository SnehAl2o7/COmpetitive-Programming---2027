#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin>>n;

        vector<ll> v(n);
        for(int i=0;i<n;i++)cin >>v[i];

        ll sum = 0;
        bool check = true;

        for(int i=0;i<n;i++){
            sum += v[i];

            ll mini = (i+1)*(i+2)/2;

            if(sum < mini){
                check = false;
                break;
            }
        }
        
        if(check){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
}