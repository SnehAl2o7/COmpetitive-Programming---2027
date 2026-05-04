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

        int max_len = 0;
        int len = 0;
        for(int i =0;i<n;i++){
            if(v[i] == 0){
                len++;
                max_len = max(len, max_len);
            }
            else{
                len = 0;
            }
        }

        cout << max_len << endl;
    }
}