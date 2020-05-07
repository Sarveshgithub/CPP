//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int main()
{
    int s, q, count = 0;
    cin >> s >> q;
    string str;
    map<string, string> tags;
    string temp;
    cin.ignore();
    f(i, s)
    {
        getline(cin, str);
        str.erase(remove(str.begin(), str.end(), '<'), str.end());
        str.erase(remove(str.begin(), str.end(), '>'), str.end());
        str.erase(remove(str.begin(), str.end(), '"'), str.end());
        cout<<"sentence::"<<str<<ed;
        for (int i = 0; i < str.size(); ++i)
        {
            if (str[i] == ' ')
            {
                cout<<str.substr(0,3);
                cout << "index::" <<i<<"str:::" << str.substr(count,i) << ed;
                count = i+1;
            }
        }
    }
}