class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0, end = n - 1, mid, first = -1, last = -1;
        
        // Find first occurrence
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                first = mid;
                end = mid - 1;
            } 
            else if (nums[mid] < target) {
                start = mid + 1;
            } 
            else {
                end = mid - 1;
            }
        }

        // Find last occurrence
        start = 0;
        end = n - 1;
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                last = mid;
                start = mid + 1;
            } 
            else if (nums[mid] < target) {
                start = mid + 1;
            } 
            else {
                end = mid - 1;
            }
        }

        return {first, last};
    }
};
