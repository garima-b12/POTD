/*	Power of 2
	Given a non-negative integer N. The task is to check if N is a power of 2. More formally, check if N can be expressed as 2x for some x.
	gfg link: https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1
*/

bool isPowerofTwo(long long n){
	//if count of set bits in no. = 1, then it is power of 2, else not
    int count=0;
    while(n>0)
    {
        if((n&1) == 1)
            count++;
        n=n>>1;
    }
    if(count==1)
        return true;
    return false;
}
//TC: O(log n)
//SC: O(1)



bool isPowerofTwo(long long n){
    if(n==1)
 	    return true;
    //if number is power of 2, then log base 2 of it will be an integer
    if(log2(n)-floor(log2(n)) == 0)
        return true;
 	return false
}
//TC: O(1)
//SC: O(1)



