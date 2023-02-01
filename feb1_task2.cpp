/*	Range Sum Query 2D - Immutable
	leetcode link: https://leetcode.com/problems/range-sum-query-2d-immutable/
*/

class NumMatrix {
public:
    vector<vector<int>> presum;

    NumMatrix(vector<vector<int>>& matrix) 
    {
        int n=matrix.size(), m=matrix[0].size();
        presum = vector<vector<int>>(n+1, vector<int>(m+1,0));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                presum[i][j] = matrix[i-1][j-1]+presum[i-1][j]+presum[i][j-1]-presum[i-1][j-1];
            }
        }

    }
    /*	TC: O(m*n)
		SC: O(m*n)
	*/
    
    int sumRegion(int row1, int col1, int row2, int col2) {

        int bottomright = presum[row2+1][col2+1];
        int above = presum[row1][col2+1];
        int left = presum[row2+1][col1];
        int topleft = presum[row1][col1];

        return bottomright-above-left+topleft;
    }
    /*	TC: O(1)
		SC: O(1)
	*/
};


