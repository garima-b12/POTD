/*	Modified Numbers and Queries
	gfg link: https://practice.geeksforgeeks.org/problems/modified-numbers-and-queries0904/0
*/

class Solution {
  public:
    void seive(vector<int> &prime_sum, int n)
    {
        for(int i=2;i<=n;i++)
        {
            if(prime_sum[i]==0)
            {
                for(int j=i;j<=n;j+=i)
                    prime_sum[j]+=i;
            }
        }
    }
    
    int sumOfAll(int l, int r){
        vector<int> prime_sum(r+1,0);
        seive(prime_sum, r);
        int sum=0;
        for(int i=l;i<=r;i++)
        {
            sum+=prime_sum[i];
        }
        return sum;
    }
};

/*	TC: O(n*log(logn))
	SC: O(n)
*/
