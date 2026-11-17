#include <algorithm>
#include<bits/stdc++.h>
#include <climits>

using namespace std;

#define ll long long

const int N = 2e5 + 10;
vector<vector<int>> AP(N+1);

void storesieve(){
    for(int i = 2;i<=N;i++){
        if(AP[i].empty()){
            for(int j = i;j <= N;j+= i){
                AP[j].push_back(i);
            }
        }
    }
}

int solve(int n,int k, vector<int> &dp){
    if(n <= k){
        return 0;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    int mini = INT_MAX;

    for(int i =0;i<AP[n].size();i++){
        int val = n/AP[n][i];

        int cost = 1 + (solve(val,k,dp) * AP[n][i]);

        mini = min(mini,cost);
    }

    return dp[n] = mini;
    
}

int main(){

    storesieve();

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin >>n >>k;
        vector<int> v(n);
        for(int i=0;i<n;i++)cin>>v[i];

        int maxi = *max_element(v.begin(), v.end());

        vector<int>dp(maxi+1,-1);

        ll total_value = 0;

        for(int i = 0;i<n;i++){
            if(v[i] > k){
                total_value += solve(v[i],k,dp);
            }
        }

        cout << total_value << endl;        
    }
}

