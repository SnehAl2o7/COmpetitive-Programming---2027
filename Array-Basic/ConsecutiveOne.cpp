#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int temp = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == 1){
                ++temp;
            }
            else {
                maxi = max(temp,maxi);
                temp = 0;
            }
        }
        maxi = max(temp,maxi);
        return maxi;
    }
};

int main(){
    Solution sol;

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n;i++){
            cin >> arr[i];
        }

        cout << sol.findMaxConsecutiveOnes(arr) << endl;
    }
}