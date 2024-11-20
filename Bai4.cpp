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

string turn_to(string x, char d) {
	char c;
	if (d == '6') c = '5';
	else c = '6';
	FOR(i, 0, x.length() - 1) {
		if (x[i] == c) x[i] = d;
	}

	return x;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		string a, b;
		cin >> a >> b;

		ll t1 = stoll(turn_to(a, '5')) + stoll(turn_to(b, '5'));
		ll t2 = stoll(turn_to(a, '6')) + stoll(turn_to(b, '6'));

		cout << t1 << " " << t2 << endl;
	}

	return 0;
}