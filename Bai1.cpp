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

int sum_digit(int n) {
	int res = 0;

	while (n > 0) {
		res += n % 10;
		n /= 10;
	}

	return res;
}

int main() {
	int n;
	cin >> n;

	int s1 = sum_digit(n);
	int s2 = 0;

	for (int i = 2; i <= trunc(sqrt(n)); i++) {
		if (n % i == 0) {
			while (n % i == 0) {
				s2 += sum_digit(i);
				n /= i;
			}
		}
	}

	if (n > 1) s2 += sum_digit(n);

	if (s1 == s2) cout << "YES\n";
	else cout << "NO\n";


	return 0;
}