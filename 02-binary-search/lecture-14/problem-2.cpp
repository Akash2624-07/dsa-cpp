// Leetcode 35 - Search Insert Position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0, end = n-1;
        int ans = n;
        while(start<=end){
            int mid = start + (end-start)/2;

            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                ans = mid;
                end = mid -1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
    }
};

// Errors while doing it 
// 1. initialising ans = -1, instead of n, to catch the edgecase of target being bigger than any element in nums.
// 2. doing start<end, instead of start<=end, as it doesnt check for the single element remaining mid.