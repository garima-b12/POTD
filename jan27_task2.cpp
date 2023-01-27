/*	Reverse Vowels of a String
	leetcode link: https://leetcode.com/problems/reverse-vowels-of-a-string/
*/

class Solution {
public:
    unordered_map<char,int> m;
    void helper()
    {
        m.insert({'A',1});
        m.insert({'a',1});
        m.insert({'E',1});
        m.insert({'e',1});
        m.insert({'I',1});
        m.insert({'i',1});
        m.insert({'O',1});
        m.insert({'o',1});
        m.insert({'U',1});
        m.insert({'u',1});
    }
    string reverseVowels(string s) {
        
        helper();
        int l=0, r=s.length()-1;
        while(l<r)
        {
            while(l<r && m.find(s[l])==m.end())
                l++;
            while(l<r && m.find(s[r])==m.end())
                r--;    
            if(l<r)
                swap(s[l++], s[r--]);
        }
        return s;
    }
};

/*	TC: O()
	SC: O()
*/
