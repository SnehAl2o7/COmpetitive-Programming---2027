#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> v(n);
        for(int i =0;i<n;i++) cin >>v[i];

        if(n == 1){
            if(v[0] == 0){
                cout << 0 <<"\n";
            }
            else{
                cout << 1 << "\n";
            }
            continue;
        }

        int cnt =0, seq =0;
        for(int i =0;i<n;i++){
            if(v[i] == 0 ){
                if(seq > 0){
                    cnt++;
                }
                seq = 0;
            }
            else{
                seq++;
            }
        }

        if(seq > 0){
            cnt++;
        }
        

        cout << min(cnt,2) << "\n";
    }
}