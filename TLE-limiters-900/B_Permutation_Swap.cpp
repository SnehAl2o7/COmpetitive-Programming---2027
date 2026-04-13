#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0;i < n;i++) cin >> v[i];

        int k = abs(v[0] - 1);

        for(int i = 1;i <n;i++){
            
            k = gcd(k, abs(v[i] - (i+1)));
        }

        cout << k << endl;
    }
}