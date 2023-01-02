/* Create the following pyramid pattern of * of size n:

   For n=5:
   
    *
   * *
  * * *
 * * * * 
* * * * *

*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n: ";
	cin>>n;
	int x=n;
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<x;j++)
			cout<<" ";
		for(int j=1;j<=i;j++)
			cout<<"* ";
		x--;
		cout<<endl;
	}
	return 0;
}
