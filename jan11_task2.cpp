/*	Intersection of Two Arrays
	Given two integer arrays nums1 and nums2, return an array of their intersection. 
	Each element in the result must be unique and you may return the result in any order.
	leetcode link: https://leetcode.com/problems/intersection-of-two-arrays/
*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> ans;
        int i=0, j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i] == nums2[j])
            {
                if(ans.size() == 0 || ans.back()!=nums1[i])
                    ans.push_back(nums1[i]);
                i++, j++;
            }
            else if(nums1[i] < nums2[j])
                i++;
            else
                j++;
        }
        return ans;
    }
};

/*	TC: O((n+m)*log(n+m))
	SC: O(1)
*/
