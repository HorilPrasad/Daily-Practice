class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<int>preSum;
        preSum.push_back(arr[0]);
        int n = arr.size();
        int total= arr[0];
        for(int i=1; i<n; i++)
        {
            preSum.push_back(preSum[i-1]+arr[i]);
            if(i%2==0)
                total+=preSum[i];
        }
        
        
        
        
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
        {
            
            if((i+j)%2 !=0)
                total+=preSum[j]-preSum[i];
        }
        }
        
        return total;
    }
};