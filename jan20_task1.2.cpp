/*	Noldbach problem
	codeforces link: https://codeforces.com/problemset/problem/17/A
*/

#include<bits/stdc++.h>
using namespace std;

map<int,int> primes;
void seive_prime(int n)
{
	//seive to store which is number is prime, and which is not ifrom 1 to n
	vector<bool>nonprime(n+1,0);
	nonprime[0]=1, nonprime[1]=1; 
	for(int i=2;i<=sqrt(n);i++)
	{
		if(nonprime[i]==0)
			for(int j=i*i;j<=n;j+=i)
				nonprime[j] = 1;
	}

	//storing all prime numbers from 1 to n in hashmap	
	for(int i=2;i<=n;i++)
		if(nonprime[i]==0)
			primes[i]++;
}

string noldbach(int k)
{
	if(k == 0)
		return "YES";
	int ctr=0;
	for(auto itr=primes.begin();itr!=primes.end();itr++)
	{
		if(++itr == primes.end())
			break;
		itr--;
		if(primes.find(itr->first+(++itr)->first+1) != primes.end())
		{
			ctr++;
			if(ctr==k)
				return "YES";
		}
		itr--;
	}
	return "NO";
}

int main()
{
	int n, k;
	cin>>n>>k;
	seive_prime(n);
	cout<<noldbach(k);
	
	return 0;
}

/*	TC: O(n*log n)
	SC: O(n)
*/
