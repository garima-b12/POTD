/*	Longest Uploaded Prefix
	leetcode link: https://leetcode.com/problems/longest-uploaded-prefix/
*/

class LUPrefix {
public:
    vector<int> videos;
    int prefix=0;
    LUPrefix(int n) {
        videos.resize(n+1,0);
    }
    
    void upload(int video) {
        videos[video]=1;
        while(prefix<videos.size()-1 && videos[prefix+1]==1)
            prefix++;
    }
    
    int longest() {
        return prefix;
    }
};

/*	TC: O(n)
	SC: O(n)
*/
