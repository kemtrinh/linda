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
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int a[N];
		map<int, int> cnt;

		FOR(i, 0, n - 1) {
			cin >> a[i];
			cnt[a[i]]++;
		}

		bool flag = false;

		FOR(i, 0, n - 1) {
			if (cnt[a[i]] > 1) {
				cout << a[i] << endl;
				flag = true;
				break;
			}
		}

		if (!flag) cout << "NO\n";
	}

	return 0;
}