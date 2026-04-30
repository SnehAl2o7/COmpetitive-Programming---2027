#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i = 0;i<n;i++) cin >> v[i];

        long long sum = 0;
        if(v[n-1] == 1) sum++;

        for(int i : v){
            if(i != 1){
                sum += i;
            }
        }

        cout << sum << endl;
        
    }
}