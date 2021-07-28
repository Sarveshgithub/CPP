//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int solve(string beginWord, string endWord, vector<string> &wordList) {
	set<string> st;
	int sol = 0;
	f(x, wordList.size()) {
		st.insert(wordList[x]);
	}

	if (!st.count(endWord)) {
		return sol;
	}

	queue<string> q;
	q.push(beginWord);
	while (!q.empty()) {
		sol ++;
		int qSize = q.size();
		//loop queue
		while (qSize--) {
			string f = q.front();
			q.pop();
			//check all occurance

			for (int i = 0 ; i < f.length(); i++) {
				string temp = f;
				for (char c = 'a'; c <= 'z'; c++) {
					temp[i] = c;
					//cout << " temp::: " << i << c << temp << "-";
					if (temp[i] == f[i]) {
						continue;
					}
					if (temp == endWord) {
						//cout << "Inside:::" << temp << "sol" << sol;
						return sol + 1;
						//break;
					}
					if (st.count(temp)) {
						q.push(temp);
						st.erase(temp);
					}
				}
			}
		}

	}
	return 0;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	//beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log","cog"]

	string beginWord = "hit", endWord = "cog";
	vector<string> wordList;
	wordList = {"hot", "dot", "dog", "lot", "log", "cog"};
	cout << "SOL::" << solve(beginWord, endWord, wordList);

}
