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
#define M 100 + 5
#define N 500 + 5
#define MOD (long long)1000000007
#define ll long long
#define ld long double
#define sz size()
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define zero(n) setw(n) << setfill('0')
#define stp(n) fixed << setprecision(n)


struct ThiSinh {
	int stt;
	int i, s, t;
	double d;
};

bool cmp(ThiSinh& a, ThiSinh& b) {
	return (a.d > b.d || (a.d == b.d && a.stt < b.stt));
}

int main() {
	int n;
	cin >> n;

	struct ThiSinh ds[N];

	FOR(i, 0, n - 1) {
		int id, share, tuong_tac;
		cin >> id >> share >> tuong_tac;
		ds[i] = { i, id, share, tuong_tac, 0 };
		ds[i].d = 0.7 * share + 0.3 * tuong_tac;
	}

	sort(ds, ds + n, cmp);

	FOR(i, 0, 6) cout << ds[i].i << " ";
	cout << endl;

	return 0;
}