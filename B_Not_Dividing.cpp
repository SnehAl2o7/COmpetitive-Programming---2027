#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        vector<long long>v(n);
        for(int i = 0;i<n;i++)cin >> v[i];

        int maxi = v[0];
        for(int i:v){
            maxi = max(i,maxi);
        }

        
    }
}