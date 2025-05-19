class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size();
        
        while (l < h) {
            int mid = l + (h - l) / 2;
            
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                h = mid;  // Correct approach to preserve the insertion position
            else
                l = mid + 1;
        }
        
        return l;  // l points to the correct insertion index
    }
};
