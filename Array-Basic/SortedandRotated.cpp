#include<bits/stdc++.h>
using namespace std;

// my solution
class Solution1 {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> rotated(n);
        int r = 0;
        for(int i = 1;i < n;i++){
            if(nums[i] < nums[i-1]){
                r = i;
            }
        }

        cout << r << endl;

        if( r == 0 ){
            return true;
        }else {
            for(int i = 0;i < n;i++){
                rotated[i] = nums[(r+i) % n];
            }
            // for ( int i : rotated){
            //     cout << i << endl;
            // }
            for(int i = 1;i < n;i++){
                if(rotated[i] < rotated[i-1]){
                    return false;
                }
            }
        }
        return true;
    }
};

// Optimum Solution

class Solution2 {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for(int i = 0;i < n;i++){
            if(nums[i] > nums[(i+1) % n]){
                count++;
            }
        }

        return count <= 1;
    }
};

