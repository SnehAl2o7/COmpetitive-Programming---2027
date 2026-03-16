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

        if(n == 1){
            cout << "NO" <<endl;
            break;
        }

        unordered_map<int,int> mpp;
        for(int i = 0;i<n;i++){
            for(int j = 0;j <n;j++){
                mpp[a[i][j]]++;
            }
        }
        
        int flag = 1;

        int max_occur = -1;
        for(auto it:mpp){
            if(it.second > max_occur){
                max_occur = it.second;
            }
        }

        int sum = 0, same = 0;
        for(auto it : mpp){
            if(it.second != max_occur){
                sum += it.second;
            }

            if(it.second == max_occur){
                same++;
            }
        }

        if(sum == 0 && same > 1){
            cout << "YES" << endl;
        }

        else if(sum >= n){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }
}