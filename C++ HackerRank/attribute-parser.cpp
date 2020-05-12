//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
string join(vector<string> tags, string seprator)
{
    string joinedStr;
    vector<string>::iterator it;
    for (it = tags.begin(); it != tags.end(); ++it)
    {
        int index = distance(tags.begin(), it);
        joinedStr += *it;
        if (index + 1 != tags.size())
        {
            joinedStr += seprator;
        }
    }
    return joinedStr;
}
int main()
{
    int s, q;
    cin >> s >> q;
    map<string, string> tags;
    vector<string> tagKey;
    cin.ignore();
    f(i, s)
    {
        int count = 0;
        string tempKey, str;
        getline(cin, str);
        vector<string> word;
        str.erase(remove(str.begin(), str.end(), '<'), str.end());
        str.erase(remove(str.begin(), str.end(), '>'), str.end());
        str.erase(remove(str.begin(), str.end(), '"'), str.end());
        stringstream ss(str);
        string buf;
        if (!(str.find("/") != string::npos))
        {
            while (ss >> buf)
            {
                if (count == 0)
                {
                    tagKey.push_back(buf);
                }
                if (count % 3 == 0 && count > 0)
                {
                    tags[tempKey] = buf;
                }
                else if (count > 0 && buf != "=")
                {
                    tempKey = join(tagKey, ".") + "~" + buf;
                }
                count++;
            }
        }
        else
        {
            str.erase(0, 1);
            vector<string>::iterator it;
            for (auto it = tagKey.begin(); it != tagKey.end(); ++it)
            {
                if (str == *it)
                {
                    tagKey.erase(it);
                    break;
                }
            }
        }
    }
    map<string, string>::iterator mapit;
    vector<string> output;
    f(i, q)
    {
        string query;
        getline(cin, query);
        if (tags.count(query) == 1)
        {
            output.push_back(tags.at(query));
        }
        else
        {
            output.push_back("Not Found!");
        }
    }
    vector<string>::iterator outputIt;
    for (outputIt = output.begin(); outputIt != output.end(); ++outputIt)
    {
        cout << *outputIt << ed;
    }
}