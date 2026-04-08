#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >>s;

        if(n == 1){
            cout << "Yes" << endl;
        }
        else if(n == 2){
            if(k == 1){
                cout << "Yes" << endl;
            }else {
                cout << "No" << endl;
            }
        }
        else {
            unordered_map<char,int> mpp;
            for(char c : s){
                mpp[c]++;
            }

            vector<pair<char,int>> vec(mpp.begin(), mpp.end());

            sort(vec.begin(), vec.end(), [](pair<char,int>a, pair<char,int>b){
                return a.second < b.second;
            });

            for(auto it: vec){
                cout << it.first << "-> " << it.second << endl;
            }

            int ch = 0;

            


        }

        
    }
}