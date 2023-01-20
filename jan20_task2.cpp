/*	Gcd Queries	
	codechef link: https://www.codechef.com/problems/GCDQ	 
*/

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b, a%b);
}

int main() {
	int t;
	cin>>t;
	while(t)
	{
	    int n, q;
	    cin>>n>>q;
	    int arr[n], queries[q][2];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    for(int i=0;i<q;i++)
	        for(int j=0;j<2;j++)
	            cin>>queries[i][j];
	       
	    //prefix array storing consecutive gcds of arr[i] from front
	    //suffix array storing consecutive gcds of arr[i] from end
	    int prefix[n+1], suffix[n+1];
	    prefix[0]=0, suffix[n]=0;
	    for(int i=1;i<=n;i++)
	        prefix[i] = gcd(prefix[i-1], arr[i-1]);
	    for(int i=n-1;i>=0;i--)
	        suffix[i] = gcd(suffix[i+1], arr[i]);
	        
	    for(int i=0;i<q;i++)
	    {
	        int l = queries[i][0], r = queries[i][1];
	        cout<<gcd(prefix[l-1], suffix[r])<<endl;
	    }
	       
	    t--;
	}
	return 0;
}

/*	TC: O(n*log n)
	SC: O(n)
*/	
