#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        vector<ll>v(n);
        for(int i =0;i<n;i++)cin >> v[i];
        
        ll cnt = 0;

        for(int i =n-1;i>0;i--){
            if(v[i] <= v[i-1]){
                while(v[i-1] > v[i]){
                    v[i-1] /= 2;
                    cnt++;
                }
            }

            if(i > 1 && v[i-1] < 2){
                cnt = -1;
                break;
            }
        }

        cout << cnt << endl;
    }
}