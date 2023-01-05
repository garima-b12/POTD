/* Given a number N. The task is to complete the function convertFive(),
   which replaces all zeros in the number with 5 and returns the number.
   eg. 1005 -> 1555
*/

class Solution{
  public:
    
    int convertFive(int n)
    {
        int num=0;
        while(n)		//reversing the number by replacing all 0's with 5
        {
            int rem=n%10;
            if(rem==0)
                rem=5;
            num=num*10+rem;
            n/=10;
        }
        while(num)		//reversing the number again, to get back the original number
        {
            n=n*10+(num%10);
            num/=10;
        }
        return n;
    }
};

/* TC: O(n)
   SC: (1)
*/
