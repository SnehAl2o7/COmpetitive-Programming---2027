#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >>t;
    while(t--){
        int n,m;
        cin >>n >>m;
        vector<ll> a(n), b(m);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];

        if(n < 2*m){
            cout << "NO\n";
            continue;
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        bool check = 1;

    
        for(int i = 0; i < m; i++){
            if(a[i] > b[i]){
                check = 0;
                break; 
            }
        }

        for(int i = 0; i < m; i++){
            if(a[n - m + i] < b[i]){
                check = 0;
                break; 
            }
        }
        

        if(check){
            cout << "YES\n";
        }
        else{
            cout <<"NO\n";
        }
    }
}