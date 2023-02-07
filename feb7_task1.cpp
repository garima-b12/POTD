/*	Difference Between Element Sum and Digit Sum of an Array
	leetcode link: https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/
*/

class Solution {
public:
    int sum(int n)
    {
        int s=0;
        while(n>0)
        {
            s+=n%10;
            n/=10;
        }
        return s;
    }
    int differenceOfSum(vector<int>& nums) {
        int digitsum=0;
        int elsum=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<nums.size();i++)
        {
            digitsum+=sum(nums[i]);
        }
        return abs(elsum-digitsum);
    }
};

/*	TC: O(n)
	SC: O(1)
*/
