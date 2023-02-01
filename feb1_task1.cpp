/*	Find the Duplicate Number
	leetcode link: https://leetcode.com/problems/find-the-duplicate-number/
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0,x=nums.size();
        while(i<x)
        {
            if(nums[i]==i+1)
               i++;
            else
            {
                if(nums[nums[i]-1]==nums[i])
                    return nums[i];
                swap(nums[nums[i]-1],nums[i]);
            }
                
        }
        return 0;
    }
};
/*	TC: O(n)
	SC: O(1)
*/

//without modifying the actual array
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //two pointer approach
        //floyd's detection cycle
        
        int slow=0, fast=0;
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);

        slow=0;
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }

        return slow;
    }
};
/*	TC: O(n)
	SC: O(1)
*/
