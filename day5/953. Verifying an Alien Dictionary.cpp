class Solution
{
public:
    bool isAlienSorted(vector<string> &words, string order)
    {
        map<char, int> seq;

        for (int i = 0; i < order.size(); i++)
        {
            seq[order[i]] = i;
        }

        int j = 0;
        int k = 0;
        string a="", b="";
        bool flag = false;
        for (int i = 0; i < words.size() - 1; i++)
        {
            a = words[i];
            b = words[i + 1];
            j = 0;
            k = 0;
            while (j < words[i].size() && k < words[i + 1].size())
            {
                cout<<seq[words[i][j]]<<" "<<seq[words[i + 1][k]]<<endl;
                if (seq[words[i][j]] < seq[words[i + 1][k]])
                    {flag=true; break;};

                if (seq[words[i][j]] > seq[words[i + 1][k]])
                    return false;

                j++;
                k++;
            }
        }

        return a=="" || flag || (a.size() <= b.size());
    }
};