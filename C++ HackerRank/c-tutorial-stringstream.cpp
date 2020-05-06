#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    vector<int> ans;
    int a;
    char c;
    stringstream ss(str);
    while (ss >> a)
    {
        ans.push_back(a);
        ss >> c;
    }
    return ans;
    // Complete this function
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}