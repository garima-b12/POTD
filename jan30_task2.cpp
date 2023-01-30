/*	Prime Arrangements
	leetcode link: https://leetcode.com/problems/prime-arrangements/
*/

class Solution {
public:
    long factorial(int n)
    {
        long fact=1;
        for(int i=2;i<=n;i++)
            fact = (fact*i)%1000000007;
        return fact;
    }
    void seive(vector<int> &primes, int n)
    {
        primes[0]=primes[1]=0;
        for(int i=2;i<=n;i++)
        {
            if(primes[i] == 1)
                for(int j=i*i;j<=n;j+=i)
                    primes[j] = 0;
        }
    }
    int numPrimeArrangements(int n) {
        vector<int> primes(n+1,1);
        seive(primes, n);

        int ctr=0;
        for(int i=1;i<=n;i++)
        {
            if(primes[i]==1)   
                ctr++;
        }
        return (factorial(ctr)*factorial(n-ctr)) % 1000000007;
    }
};

/*	TC: O(n*log(logn))
	SC: O(n)
*/
