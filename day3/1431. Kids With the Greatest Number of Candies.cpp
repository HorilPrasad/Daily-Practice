class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m = INT_MIN;
        vector<bool>v;
        for(int i=0; i<candies.size(); i++)
        {
            m = max(m,candies[i]);
        }
        
        for(int i=0; i<candies.size(); i++)
        {
            if(m<=(candies[i]+extraCandies))
                v.push_back(true);
            else
              v.push_back(false); 
        }
        
        return v;
    }
};