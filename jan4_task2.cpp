/* You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
   Leetcoe link: https://leetcode.com/problems/rotate-image/ 
*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //reverse the rows of matrix, then transpose of that matrix will be the 
        //clockwise rotated matrix
        reverse(matrix.begin(),matrix.end());   //reversing the rows
        for(int i=0;i<matrix.size();i++)        //converting to tranpose
        {
            for(int j=i+1;j<matrix[i].size();j++)
                swap(matrix[i][j], matrix[j][i]);
        }
    }
};

/*	TC: O(n^2)
	SC: O(1)
*/
