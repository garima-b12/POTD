/*	Max Sum Subarray of size K
	gfg link: https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
*/

class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        long sum=0;
        for(int i=0;i<K;i++)
            sum+=Arr[i];
        long maxi=sum;
            
        for(int i=K;i<N;i++)
        {
            sum+=Arr[i];
            sum-=Arr[i-K];
            maxi=max(sum,maxi);
        }
        
        return maxi;
    }
};

/*	TC: O(n)
	SC: O(1)
*/
