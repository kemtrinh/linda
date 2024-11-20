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

#define MAX 1000000000 + 5
//#define M 100 + 5
//#define N 500 + 5
#define MOD (long long)1000000007
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

		ll arr[10001];
		ll tong[10001] = { 0 };

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (i == 0) tong[0] = arr[0];
			else tong[i] = tong[i - 1] + arr[i];
		}

		bool check = false;

		int i = 0;

		if (tong[n - 1] - arr[0] == 0) {
			check = true;
		}
		else
		for (i = 1; i < n; i++) {
			ll tong1 = tong[i - 1];
			ll tong2 = tong[n - 1] - tong[i - 1] - arr[i];
			if (tong1 == tong2) {
				check = true;
				break;
			}
		}

		if (check) cout << i + 1;
		else cout << -1;
		cout << endl;
	}

	return 0;
}