#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int msb = 1 << (31 - __builtin_clz(n-1));

        for(int i = msb-1;i >=0;i--){
            cout << i<< " ";
        }

        for(int i = msb; i < n;i++){
            cout << i << " ";
        }

        cout << "\n";
    }
}