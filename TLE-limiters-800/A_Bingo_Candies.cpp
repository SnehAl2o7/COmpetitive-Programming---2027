#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> a(n,vector<int>(n,0));
        for(int i =0;i<n;i++){
            for(int j = 0;j<n;j++){
                cin >> a[i][j];
            }
        }

        unordered_map<int,int> mpp;
        for(int i = 0;i<n;i++){
            for(int j = 0;j <n;j++){
                mpp[a[i][j]]++;
            }
        }
        
        bool flag = true;

        for(auto it : mpp){
            if(it.second > n*(n-1)){
                flag = false;
                break;
            }
        }

        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}