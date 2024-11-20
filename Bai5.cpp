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
		int n, m;
		cin >> n >> m;

		int a[N];
		int maxVal = -1000000007;
		int p = 0;

		FOR(i, 0, n - 1) {
			cin >> a[i];
			if (maxVal < a[i]) {
				maxVal = a[i];
				p = i;
			}
		}

		for (int i = n; i >= p + 1; i--) {
			a[i] = a[i - 1];
		}

		a[p] = m;

		FOR(i, 0, n) {
			if (a[i] < 0) cout << a[i] << " ";
		}

		FOR(i, 0, n) {
			if (a[i] >= 0) cout << a[i] << " ";
		}

		cout << endl;
	}


	return 0;
}