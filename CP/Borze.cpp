//Author : Sarvesh
//https://codeforces.com/problemset/problem/32/B
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str, tempStr;
    getline(cin, str);
    string::iterator it;
    for (it = str.begin(); it != str.end(); it++)
    {
        tempStr.push_back(*it);
        if (tempStr == ".")
        {
            tempStr.erase();
            cout << 0;
        }
        else if (tempStr == "-.")
        {
            cout << 1;
            tempStr.erase();
        }
        else if (tempStr == "--")
        {
            cout << 2;
            tempStr.erase();
        }
    }
}