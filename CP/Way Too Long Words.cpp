//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
// Driver Code
int main() {
    int n;
    cin>>n;
    f1(x, n) {
        string s;
        cin >> s;
        //cout << "len:::" << s.length();

        if (s.length() > 10) {
            cout << s[0] << s.length() - 2 << s[s.length() - 1];
        } else {
            cout << s;
        }
        cout << ed;
    }

    return 0;
}
