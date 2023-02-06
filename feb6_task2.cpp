/*	Contains Duplicate II
	leetcode link: https://leetcode.com/problems/contains-duplicate-ii/
*/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<=k && i<nums.size();i++)
        {
            if(m.find(nums[i])==m.end())
                m[nums[i]]++;
            else
                return true;
        }
        for(int i=k+1;i<nums.size();i++)
        {
            m.erase(nums[i-k-1]);
            if(m.find(nums[i])==m.end())
                m[nums[i]]++;
            else
                return true;
        }
        return false;
    }
};

/*	TC: O(n)
	SC: O(k)
*/
