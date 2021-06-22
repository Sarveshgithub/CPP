//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int ans = 0;
    while (n--) {
        int p, v, t, temp = 0;
        cin >> p >> v >> t;
        temp += p + v + t;
        if (temp > 1) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}