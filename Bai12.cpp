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

	ll f[92];

	f[0] = 0;
	f[1] = 1;

	FOR(i, 2, 91) {
		f[i] = f[i - 1] + f[i - 2];
	}

	int t;
	cin >> t;

	while (t--) {
		ll n;
		cin >> n;

		bool flag = false;

		FOR(i, 0, 91) {
			if (n == f[i]) {
				flag = true;
				break;
			}
		}

		if (flag == true) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}