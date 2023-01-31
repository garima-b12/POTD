/*	Range Sum Query - Immutable
	leetcode link: https://leetcode.com/problems/range-sum-query-immutable/
*/

class NumArray {
public:
    vector<int> prefix;
    NumArray(vector<int>& nums) {
        prefix.resize(nums.size()+1);
        prefix[0] = 0;
        for(int i=0;i<nums.size();i++)
            prefix[i+1] = prefix[i]+nums[i];
    }
    /*	TC: O(n)
		SC: O(n) */
    
    int sumRange(int left, int right) {
        return prefix[right+1]-prefix[left];
    }
    /*	TC: O(1)
		SC: O(1) */
};


