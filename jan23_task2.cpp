/*	Largest subarray with 0 sum
	gfg link: https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1
*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        int sum=0, len=0;
        unordered_map<int, int> prefix;
        for(int i=0;i<A.size();i++)
        {
            sum+=A[i];
            if(i==0 && A[i]==0)
                len=1;
            if(sum == 0)
                len = i+1;
            if(prefix.find(sum) == prefix.end())
                prefix[sum] = i;
            else
                len = max(len, i-prefix[sum]);
        }
        return len;
    }
};

/*	TC: O(n)
	SC: O(n)
*/
