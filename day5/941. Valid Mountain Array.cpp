class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i=1;
        while(i < arr.size() && arr[i] > arr[i-1])
            i++;
        if (i == 1 || i >= arr.size())
            return false;
        
        while(i < arr.size() && arr[i] < arr[i-1])
            i++;
        
        return i >= arr.size();
    }
};


//second method
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        int i=0;
        int j=arr.size()-1;
        while(i<arr.size()-1)
        {
            if(arr[i]<arr[i+1])
            i++;
            else
                break;
        }
        while(j>0)
        {
            if(arr[j]<arr[j-1])
            j--;
            else
                break;
        }
        
        if(j==arr.size()-1 || i==0)
            return false;
    
        
        if(j==i)
        {
            return true;
        }else if(i+1 == j)
        {
            if(arr[i] != arr[j])
                return true;
            else
                return false;
        }else
        return false;
    }
};