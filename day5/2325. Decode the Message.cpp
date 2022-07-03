class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>m;
        char ch ='a';
        for(int i=0; i<key.size(); i++)
        {
            if(key[i] != ' ' && (m[key[i]] < 'a' || m[key[i]]>'z'))
            {
                m[key[i]] = ch;
                ch++;
            }
        }
        string ans="";
        for(int i=0; i<message.size(); i++)
        {
            if(message[i] != ' ')
                ans+=m[message[i]];
            else
                ans+=message[i];
        }
        
        
        return ans;
    }
};