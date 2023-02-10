/*	Count number of free cell
	gfg link: https://practice.geeksforgeeks.org/problems/90a81c305b1fe939b9230a67824749ceaa493eab/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
*/

class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
        long long int size=n*n;
        vector<int> r(n,0), c(n,0);
        vector<long long int> ans;
        int rows=n, cols=n;
        for(int i=0;i<k;i++)
        {
            int x=arr[i][0]-1, y=arr[i][1]-1;
            if(r[x]==0 && c[y]==0)
            {
                size=size-rows-cols+1;
                r[x]=1, c[y]=1; 
                rows--, cols--;
            }
            else if(r[x]==0)
            {
                size=size-cols;
                r[x]=1;
                rows--;
            }
            else if(c[y]==0)
            {
                size=size-rows;
                c[y]=1;
                cols--;
            }
          
            ans.push_back(size);
        }
      
      return ans;
	}
};

/*	TC: O(k)
	SC: O(n)
*/
