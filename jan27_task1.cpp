/*	Maximum Average Subarray I
	leetcode link: https://leetcode.com/problems/maximum-average-subarray-i/
*/

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double avg=0, sum=0;
        for(int i=0;i<k;i++)
            sum+=nums[i];
        avg=sum/k;
        
        for(int i=k;i<nums.size();i++)
        {
            sum-=nums[i-k];
            sum+=nums[i];
            avg=max(avg,sum/k);
        }
        
        return avg;
    }
};

/*	TC: O(n)
	SC: O(1)
*/
