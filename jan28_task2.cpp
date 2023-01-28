/*	Sum of Unique Elements
	leetcode link: https://leetcode.com/problems/sum-of-unique-elements/
*/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        
        for(auto itr:m)
            if(itr.second == 1)
                sum+=itr.first;
        return sum;
    }
};

/*	TC: O(n)
	SC: O(n)
*/
