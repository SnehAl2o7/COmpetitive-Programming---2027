#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);

        for(int i = 0;i<n;i++) cin >> v[i];

        int odd_cnt = 0;
        for(int i : v){
            if(i%2 == 1){
                odd_cnt++;
            }
        }

        if(odd_cnt%2==0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    
    }
}