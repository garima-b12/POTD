/*Given a string, remove the vowels from the string */

string removeVowels(string S) 
{
    for(int i=0;i<S.length();i++)
    {
        if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u')
        {
	        S.erase(i,1);
	        i--;
	    }
	}
	return S;
}

/* Time complexity: O(n)
   Space Complexity: O(1)
*/
