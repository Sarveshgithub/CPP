//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n, k, ans = 0,prev;
    cin >> n >> k;
    f1(x, n) {
        int score;
        cin >>score;
        if (prev == score){
            ans ++;
        }
        else if(x == 1 && score == 0){
            ans = 0;
            break;
        }
        else if(score == 0 && x <= k){
            ans = x-1;
            break;
        }
        else if(x == k && score > 0){
            ans = k;
            prev = score;
        }

    }
    cout << ans;
    return 0;
}
