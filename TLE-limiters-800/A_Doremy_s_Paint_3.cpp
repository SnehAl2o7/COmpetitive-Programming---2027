#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n,0);
        for(int i = 0;i < n;i++){
            cin >> arr[i];
        }

        unordered_map<int,int> mpp;
        for(int i = 0; i < n;i++){
            mpp[arr[i]]++;
        }

        bool flag = 1;
        
        if(mpp.size() > 2){
            flag = 0;
        } 

        else if(mpp.size() == 2){
            int cnt1 = 0, cnt2 = 0;
            for(auto it : mpp){
                if(cnt1 == 0){
                    cnt1 = it.second;
                }
                else{
                    cnt2 = it.second;
                }
            }

            int diff = abs(cnt1 - cnt2);

            if(diff == 0 || diff == 1) flag = 1;
            else flag = 0;
        }


        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}