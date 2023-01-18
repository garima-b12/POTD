/*	Create Target Array in the Given Order
	leetcode link: https://leetcode.com/problems/create-target-array-in-the-given-order/
*/

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
        vector<int> target;
        for(int i=0;i<nums.size();i++)
            target.insert(target.begin()+index[i], nums[i]);
        return target;
    }
};

/*	TC: O(n^2)
	SC: O(n)
*/
