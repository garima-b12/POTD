/* program to print hollow inverted triangle star pattern of size n 

For n=5:
* * * * *
 *     *
  *   *
   * *
    *
*/
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter n: ";
	cin>>n;
	int x=(2*n-1)-4;
	for(int i=0;i<n;i++)
		cout<<"* ";
	cout<<endl;
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<=i;j++)
			cout<<" ";
		cout<<"*";
		for(int j=1;j<=x;j++)
			cout<<" ";
		if(i!=n-1)
		cout<<"*";
		x-=2;
		cout<<endl;
	}
	return 0;
}

/*	TC: O(n^2)
	SC: O(1) */
