#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int x,y;
        cin >>x >>y;

        vector<int> v(n);
        for(int i =0;i<n;i++)cin >> v[i];

        vector<int> diff;

        for(int i=0;i<n;i++){
            diff.push_back(abs(v[i] - (i+1)));
        }

        int imp = __gcd(x,y);
        bool check = 1;

        for(int i =0;i<n;i++){
            if(diff[i] % imp != 0){
                check=0;
                break;
            }
        }

        if(check)cout << "YES\n";
        else cout << "NO\n";

    }
}