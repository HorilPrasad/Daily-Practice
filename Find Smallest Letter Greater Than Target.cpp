class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        char ch = 'z';
        int len = letters.size();
        bool flag = true;
        for(int i=0; i<len; i++)
        {
            if(letters[i]>target && letters[i]<=ch)
            {
                flag = false;
                ch = letters[i];
            }
        }
        
        if(target==ch || flag)
            return letters[0];
        else
            return ch;
        
    }
};