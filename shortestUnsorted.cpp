#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n-1;

        while(start+1 < n && nums[start+1] >= nums[start]){
                start++;
        }

        while(end-1 >= 0 && nums[end] >= nums[end-1]){
                end--;
        }
        
        if(start == n-1){
            return 0;
        }

        int mx = INT_MIN, mn = INT_MAX;
        for(int i=start; i<=end; i++){
            mn = min(mn, nums[i]);
            mx = max(mx, nums[i]);
        }

        while(start-1 >= 0 && nums[start-1] > mn){
            start--;
        }

        while(end+1 < n && nums[end+1] < mx){
            end++;
        }
        
        return end-start+1;
    }
};

// 2,6,4,8,10,9,15

// 