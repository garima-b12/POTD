/*	Count Collisions of Monkeys on a Polygon
	leetcode link: https://leetcode.com/problems/count-collisions-of-monkeys-on-a-polygon/
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
                res=res*a%mod;
            a=a*a%mod;
            b/=2;
        }
        return res;
    }
    int monkeyMove(int n) {
        return (power(2,n)+mod-2)%mod ;
    }
};

/*	TC: O(n)
	SC: O(1)
*/
