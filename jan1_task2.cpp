/* Given an array of integers, your task is to find the smallest and second smallest element in the array. If smallest and second smallest do not exist, print -1.
   gfg link: https://practice.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array3226/1
*/

vector<int> minAnd2ndMin(int a[], int n) {
    
    int min1=INT_MAX, min2=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]<min1)
            min1=a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=min1)
            if(a[i]<min2)
                min2=a[i];
    }
    vector<int> ans;
    if(min1==INT_MAX || min2==INT_MAX)
    {
        ans.push_back(-1);
        return ans;
    }
    ans.push_back(min1);
    ans.push_back(min2);
    return ans;
}

/*	Time Complexity: O(n)
	Space Complexity: O(1) */
