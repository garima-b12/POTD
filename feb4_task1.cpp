/*	Check if All the Integers in a Range Are Covered
	leetcode link: https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/
*/

class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        sort(ranges.begin(), ranges.end(), [](const vector<int> &v1, const      vector<int> &v2){
            return v1[0] < v2[0];
        });
        for(int i=0;i<ranges.size();i++)
        {
            if(ranges[i][0] <= left && ranges[i][1] >= left)
            {
                left=ranges[i][1]+1;
                if(left > right)
                    return true;
            }
        }
        return false;
    }
};

/*	TC: O(n*logn)
	SC: O(1)
*/
