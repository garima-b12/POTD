/*	Sum of primes
	Your task is to calculate sum  of primes present as digits of given number N.
	gfg link: https://practice.geeksforgeeks.org/problems/sum-of-primes0042/1
*/

int primeSum(int N){
    int sum=0, rem;
    while(N!=0)
    {
        rem=N%10;
        if(rem==2 || rem==3 || rem==5 || rem==7)
            sum+=rem;
        N=N/10;
    }
    return sum;
}
//TC: O(log n)
//SC: O(1)

