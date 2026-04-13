#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        long long n,k;
        cin >> n >> k;

        vector<long long> v(n);
        for(long long i = 0;i < n;i++){
            cin >> v[i];
        }

        sort(v.begin(),v.end());

        long long seq = 1;
        long long rem = 0;

        for(long long i = 0;i < n-1;i++){
            if(v[i+1] - v[i] <= k){
                seq++;
            }
            else{
                seq = 1;
            }
            rem = max(seq,rem);
        }

        if(n == 1){
            cout << 0 << endl;
        }else{
            cout << n -rem << endl;
        }
    }
}