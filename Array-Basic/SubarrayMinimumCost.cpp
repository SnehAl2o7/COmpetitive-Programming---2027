#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        if(n < 3){
            return -1;
        }

        vector<int> suffixmin(n);
        suffixmin[n-1] = nums[n-1];
        int mini = nums[n-1];
        for(int i = n-2; i >= 0;i--){
            suffixmin[i] = min(suffixmin[i+1], nums[i]);
        }

        int cost = 200;
        for(int j = 1; j <= n-2;j++){
            int ans = nums[0] + nums[j] + suffixmin[j+1];
            cost = min(cost,ans);
        }

        return cost;
    }
};

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }
        Solution sol;
        cout << sol.minimumCost(nums) << endl;
    }
}