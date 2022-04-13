class Solution {
public:
    bool iseven(int x){
        if(x%2==0)
            return true;
        else
            return false;
    }
    int largestInteger(int num) {
        string s=to_string(num);
        char a;
        for(int i=0;i<s.size()-1;i++)
        {
            
            for(int j=i+1;j<s.size();j++)
            {
                if(iseven((int)s[i]-48) && iseven((int)s[j]-48))
                {
                    if(s[i]<s[j])
                    {
                        char ch = s[i];
                        s[i] = s[j];
                        s[j] = ch;
                    }
                }
                if(!iseven((int)s[i]-48) && !iseven((int)s[j]-48))
                {
                    if(s[i]<s[j])
                    {
                        char ch = s[i];
                        s[i] = s[j];
                        s[j] = ch;
                    }
                }
            }
        }
        num = stoi(s);
        return num;
    }
};