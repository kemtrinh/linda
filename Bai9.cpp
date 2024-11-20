#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstring>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

#define N 100000 + 5
#define MAX 100000 + 5
#define M 26
#define MOD 5
#define ll long long
#define ld long double
#define sz size()
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define zero(n) setw(n) << setfill('0')
#define stp(n) fixed << setprecision(n)

int main() {
	int n;
	cin >> n;
	cin.ignore();

	vector<int> cnt;

	string s;
	FOR(i, 1, n) {
		getline(cin, s);
		stringstream ss(s);

		string tmp;
		int len = 0;

		while (ss >> tmp) len++;
		cnt.push_back(len);
	}

	int i = 0;
	vector<int> ans;
	bool flag = true;

	while (i < n) {
		if (cnt[i] == 6) {
			if (flag) {
				ans.push_back(1);
				flag = false;
			}
			i += 2;
		}
		else {
			flag = true;
			ans.push_back(2);
			i += 4;
		}
	}

	cout << ans.size() << endl;
	for (auto i : ans) {
		cout << i << endl;
	}

	return 0;
}