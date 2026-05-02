#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i =0;i<n;i++) cin >> v[i];

        vector<int> b;
        
        for(int i = 0;i<n;i++){
            b.push_back(n-v[i]+1);
        }

        for(int i : b){
            cout << i << " ";
        }
        cout << "\n";
        
    }
}