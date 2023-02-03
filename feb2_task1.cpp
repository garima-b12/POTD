/*	My Calendar I
	leetcode link: https://leetcode.com/problems/my-calendar-i/
*/

//solution 1 (using vector of pair)
class MyCalendar {
public:
    vector<pair<int,int>> booking;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto itr:booking)
        {
            if(start<itr.second && end>itr.first)
                return false;
        }

        booking.push_back({start,end});
        return true;
    }
};

//solution 2(using hash map)
class MyCalendar {
public:
    map<int,int> m;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        m[start]++;
        m[end]--;
        int sum=0;
        for(auto itr:m)
        {
            sum+=itr.second;
            if(sum>1)
            {
                m[start]--;
                m[end]++;
                return false;
            }
        }
        return true;
    }
};


/*	TC: O(n)
	SC: O(n)
*/
