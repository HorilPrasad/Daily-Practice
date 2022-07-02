class Solution {
public:
    
    bool isLeep(int y)
    {
        if(y%100 == 0)
        {
            if(y%400 == 0)
                return true;
            else
                return false;
        }else
        {
            if(y%4 == 0)
                return true;
            else
                return false;
        }
    }
    int dayOfYear(string date) {
        string s= date.substr(0,4);
        int y = stoi(s);
        
        s=date.substr(5,7);
        int m = stoi(s);
        
        s =date.substr(8,10);
        
        int d=stoi(s);
        
        int ans=d;
        m--;
        while(m !=0)
        {
            if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
            {
                ans+=31;
                m--;
            }else if(m==4 || m==6 || m==9 || m==11)
            {
                ans+=30;
                m--;
            }else
            {
                if(isLeep(y))
                    ans+=29;
                else
                    ans+=28;
                m--;
            }
        }
        
        return ans;
        
            
        
    }
};