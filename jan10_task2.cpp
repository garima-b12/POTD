/*	Reverse words in a given string
	Given a String S, reverse the string without reversing its individual words. Words are separated by dots.
	
	gfg link: https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1
*/

string reverseWords(string S) 
    { 
        stack<string> stk;
        int n=S.length(), j=0;
        for(int i=0;i<n;i++)
        {
            if(S[i]=='.')
            {
                stk.push(S.substr(j,i-j));
                stk.push(".");
                j=i+1;
            }
            else if(i==n-1)
            {
                stk.push(S.substr(j,i-j+1));
                j=i+1;
            }
        }
        
        S.erase();
        while(!stk.empty())
        {
            S+=stk.top();
            stk.pop();
        }
        
        return S;
    } 

/*	TC:(n)
	SC: O(n)
*/
