class Solution {
public:
    
    static bool greater(vector<int>& v,vector<int>& v1)
    {
        return v[1]>v1[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),greater);
        
        int t=0;
        int sum=0;
        for(int i=0; i<boxTypes.size(); i++)
        {
            t += boxTypes[i][0];
            if(t<=truckSize)
                sum+= boxTypes[i][0]*boxTypes[i][1];
            else
            {
                t -=boxTypes[i][0];
                
                sum+=(truckSize-t)*boxTypes[i][1];
                break;
            }
        }
        
        return sum;
    }
};