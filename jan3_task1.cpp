/* Given an integer numRows, return the first numRows of Pascal's triangle.
   Leetcode link: https://leetcode.com/problems/pascals-triangle/description/ */

class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> pascal;
        for(int i=0;i<numRows;i++)
        {
            vector<int> row;
            row.push_back(1);
            for(int j=1;j<=i;j++)
            {
                if(j>0 && j<i)
                {
                    row.push_back(pascal[i-1][j-1]+pascal[i-1][j]);
                }
                else
                    row.push_back(1);
            }
            pascal.push_back(row);
        }
        return pascal;

    }
};
