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
#include <unordered_map>
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
	int t;
	cin >> t;

	cin.ignore();

	while (t--) {
		string s;
		getline(cin, s);

		string ans = "";

		for (char i : s) if (isdigit(i)) ans += i;

		if (ans[0] == '8' && ans[1] == '4') {
			ans.erase(ans.begin());
			ans.erase(ans.begin());
			ans = "0" + ans;
		}


		cout << ans << endl;
	}
}