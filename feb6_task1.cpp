/*	Count Good Numbers
	leetcod link: https://leetcode.com/problems/count-good-numbers/
*/

class Solution {
public:
    long long mod=1000000007;
    long long power(long long a, long long b)
    {
        long long res=1;
        while(b>0)
        {
            if(b%2==1)
                res = res * a % mod;
            a = a * a % mod;
            b = b/2;
        }
        return res%mod;
    }
    int countGoodNumbers(long long n) {
        long long even, odd;
        if(n%2==0)
            even=odd=n/2;
        else
            even=n/2+1, odd=n/2;

        long long ans=(power(5,even)*power(4,odd))%mod;
        return ans;
    }
};

/*	TC: O(logn)
	SC: O(1)
*/
