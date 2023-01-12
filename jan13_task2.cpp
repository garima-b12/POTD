/*	Maximum Ice Cream Bars
	leetcode link: https://leetcode.com/problems/maximum-ice-cream-bars/
*/

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        sort(costs.begin(), costs.end());
        int bars=0, i=0;
        while(i<costs.size() && costs[i] <= coins)
        {
            bars++;
            coins-=costs[i];
            i++;
        }
        return bars;

    }
};

/*	TC: O(n*log(n))
	SC: O(1)
*/
