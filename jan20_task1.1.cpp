/*	Count Primes
	Given an integer n, return the number of prime numbers that are strictly less than n.
	leetcode link: https://leetcode.com/problems/count-primes/
*/

class Solution {
public:
    bool primes[5000002];   //by default false at all index
    void seive(int n)
    {
        //primes[i] = true, means i is not prime
        //primes[i] = false, means i is prime
        primes[0]=true, primes[1]=true;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(primes[i]==false)
                for(int j=i*i;j<n;j+=i)
                    primes[j]=true;
        }
    }
    int countPrimes(int n) {
        seive(n);
        int ctr=0;
        for(int i=0;i<n;i++)
        {
            if(primes[i] == false)
                ctr++;
        }
        return ctr;
    }
};

/*	TC: O(n*log(log n))
	SC: O(1)
*/
