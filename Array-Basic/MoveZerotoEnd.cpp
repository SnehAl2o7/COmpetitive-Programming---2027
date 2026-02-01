#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int val = 0;
        for(int i: nums){
            if(i != 0){
                nums[val] = i;
                val++;
            }
        }

        while(val < n){
            nums[val] = 0;
            val++;
        }
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
        sol.moveZeroes(nums);
        for(int i = 0; i < n; i++){
            cout << nums[i] << " ";
        }
        cout << endl;
    }
}