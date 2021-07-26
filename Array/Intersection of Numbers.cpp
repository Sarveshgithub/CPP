//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
}

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sol;
        set<int> st;
        for(int i = 0; i < nums1.size(); i ++){
            st.insert(nums1[i]);
        }
        for(int i = 0; i < nums2.size(); i ++){
            if(st.count(nums2[i])){
                sol.push_back(nums2[i]);
                st.erase(nums2[i]);
            }
        }
        return sol;
    }
};