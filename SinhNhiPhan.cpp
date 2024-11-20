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
int n;

int arr[100];

void sinh(int i) {
	for (int j = 0; j <= 1; j++) {
		arr[i] = j;
		if (i == n) {
			for (int k = 1; k <= n; k++) {
				cout << arr[k];
			}
			cout << " ";
		}
		else sinh(i + 1);
	}
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		cin >> n;

		sinh(1);
		cout << endl;
	}
}