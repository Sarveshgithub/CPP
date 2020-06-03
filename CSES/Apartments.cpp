//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int n, m, k;
bool bs(int key, int a[]) {
    cout << "key::" << key;
    int s = 0, mid, e = m;
    while (s <= e) {
        mid = (s + e) / 2;
        if (a[mid] == key)
            return a[mid];
        if (a[mid] < key)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return false;
}
int main() {
    cin >> n >> m >> k;
    int applicant[n], appartment[m];
    f(i, n) {
        int ap;
        cin >> ap;
        applicant[i] = ap;
    }
    f(i, m) {
        int apt;
        cin >> apt;
        appartment[i] = apt;
    }
    sort(appartment, appartment + m);
    vector<int> result;
    f(i, n) {
        // cout << "dfdsfdsf::" << applicant[i];
        // cout << "data::" << applicant[i] + k;
        cout << "result:::1" << bs(applicant[i] + k, appartment);
        cout << "result:::2" << bs(applicant[i] - k, appartment);
    }
}