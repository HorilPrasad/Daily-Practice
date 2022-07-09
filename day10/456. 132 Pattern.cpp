class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> st;
        
        int two=INT_MIN;
        
        for(int i=nums.size()-1; i>=0; i--)
        {
            if(nums[i]<two)
                return true;
            
            while(!st.empty() and st.top()<nums[i])
            {
                two= st.top();
                st.pop();
            }
            
            st.push(nums[i]);
        }
        
        return false;
    }
};
