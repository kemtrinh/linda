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

#define N  1000
#define MAX 305
#define M 70
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

		int arr[N];

		FOR(i, 0, n - 1) cin >> arr[i];

		int p = 0;

		FORD(i, n - 1, 1) {
			if (arr[i] < arr[i - 1]) {
				p = i - 1;
				break;
			}
		}

		int max_num = 0;
		int q = 0;

		FOR(i, p + 1, n - 1) {
			if (arr[i] < arr[p]) {
				if (arr[i] > max_num) {
					max_num = arr[i];
					q = i;
				}
			}
		}

		swap(arr[p], arr[q]);

		reverse(arr + p + 1, arr + n);

		FOR(i, 0, n - 1) cout << arr[i] << " ";
		cout << endl;
	}

	return 0;
}