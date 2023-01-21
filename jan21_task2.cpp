/*	Counting Bits
	leetcode link: https://leetcode.com/problems/counting-bits/
*/

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        ans[0]=0;
        if(n==0)
            return ans;
        ans[1]=1;
        int x=2;  //stores the power of 2, traversed till now
        for(int i=2;i<=n;i++)
        {
            //if i is a power of 2, store it in x
            if(floor(log2(i)) == ceil(log2(i)))
                x=i;
            ans[i] = 1 + ans[i-x];
        }
        return ans;
    }
};

/*	TC: O(n)
	SC: O(n)
*/
