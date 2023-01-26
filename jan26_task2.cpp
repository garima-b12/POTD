/*	Minimum Recolors to Get K Consecutive Black Blocks
	leetcode link: https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/
*/

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int w=0;
        for(int i=0;i<k;i++)
        {
            if(blocks[i] == 'W')
                w++;
        }
        int opr=w;

        for(int i=k;i<blocks.size();i++)
        {
            if(blocks[i-k] == 'W')
                w--;
            if(blocks[i] == 'W')
                w++;
            opr=min(opr,w);
        }
        return opr;
    }
};

/*	TC: O(n)
	SC: O(1)
*/
