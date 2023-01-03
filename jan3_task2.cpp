/* Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, 
   with the colors in the order red, white, and blue.
   We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
   Leetcode link: https://leetcode.com/problems/sort-colors/ */

/* TC: O(n)
   SC: O(1) */
class Solution {
public:
    void sortColors(vector<int>& nums) {

        int count0=0, count1=0, count2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                count0++;
            else if(nums[i]==1)
                count1++;
            else
                count2++;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(count0)
            {
                nums[i]=0;
                count0--;
            }
            else if(count1)
            {
                nums[i]=1;
                count1--;
            }
            else
            {
                nums[i]=2;
                count2--;
            }
        }

    }
};

/* One pass solution (using DNF(Dutch national flag) sort)
   TC: O(n)
   SC: O(1) */   
class Solution {
public:
    void sortColors(vector<int>& nums) {

        int low=0, mid=0, high=nums.size()-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[low], nums[mid]);
                low++, mid++;
            }
            else if(nums[mid]==1)
                mid++;
            else
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }

    }
};
