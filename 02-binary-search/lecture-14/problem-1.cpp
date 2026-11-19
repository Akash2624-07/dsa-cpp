// Leetcode 34 - Find First and Last Position of Element in Sorted Array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0, end = n-1;
        vector<int>ans(2,-1);
        // need 2 tries, first find smallest
        while(start<=end){
            int mid = start+(end-start)/2;
            
            if(nums[mid]==target){
                ans[0] = mid;
                end = mid - 1;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }

        // 2nd try for ending position
        start = 0, end = n-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            
            if(nums[mid]==target){
                ans[1] = mid;
                start = mid+1;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
};