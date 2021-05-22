//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
void GreyCode(int n) {
    // power of 2
    for (int i = 0; i < (1 << n); i++) {
        // Generating the decimal
        // values of gray code then using
        // bitset to convert them to binary form
        int val = (i ^ (i >> 1));

        // Using bitset
        bitset<32> r(val);

        // Converting to string
        string s = r.to_string();
        cout << s.substr(32 - n) << ed;
    }
}

// Driver Code
int main() {
    int n;
    cin >> n;
    // Function call
    GreyCode(n);

    return 0;
}
