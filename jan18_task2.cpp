/*	Lemonade Change
	leetcode link: https://leetcode.com/problems/lemonade-change/
*/

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives=0, tens=0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
                fives+=1;
            else if(bills[i]==10)
            {
                tens+=1;
                if(fives)
                    fives--;
                else
                    return false;
            }    
            else
            {
                if(tens && fives)
                    tens--, fives--;
                else if(fives>=3)
                    fives-=3;
                else
                    return false;
            }
        }
        return true;
    }
};

/*	TC: O(n)
	SC: O(1)
*/
