#include<btis/stdc++.h>
using namespace std;

class Solution {
    public:
    int longestSubarray(vector<int>& nums,int k){
        int sum = 0;
        int n = nums.size();
        int len = 0;
        int i = 0;
        for(int j = 0;j < n;j++){
            sum += nums[j];
            if(sum < k){
                len = max(len, j-i + 1);
            }
            else{
                sum -= nums[i];
                i++;
            }
        }
        return len;
    }
};

int main(){
    Solution s;
    vector<int> nums = {10,5, 2, 7, 1, 9};
    int k = 15;
    cout << s.longestSubarray(nums,k) << endl;
    return 0;
}