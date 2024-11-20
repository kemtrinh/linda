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

double quy_doi_diem(int d) {
	if (d >= 3 && d <= 4) return 2.5;
	if (d >= 5 && d <= 6) return 3.0;
	if (d >= 7 && d <= 9) return 3.5;
	if (d >= 10 && d <= 12) return 4.0;
	if (d >= 13 && d <= 15) return 4.5;
	if (d >= 16 && d <= 19) return 5.0;
	if (d >= 20 && d <= 22) return 5.5;
	if (d >= 23 && d <= 26) return 6.0;
	if (d >= 27 && d <= 29) return 6.5;
	if (d >= 30 && d <= 32) return 7.0;
	if (d >= 33 && d <= 34) return 7.5;
	if (d >= 35 && d <= 36) return 8.0;
	if (d >= 37 && d <= 38) return 8.5;
	if (d >= 39 && d <= 40) return 9.0;
}

double chuan_hoa(double d) {
	double fracpart = d - (int)d;
	if (fracpart < 0.25) return d - fracpart;
	if (fracpart < 0.75) return d - fracpart + 0.5;
	return d - fracpart + 1.0;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		int r, l;
		double reading, listening, speaking, writing;

		cin >> r >> l >> speaking >> writing;

		reading = quy_doi_diem(r);
		listening = quy_doi_diem(l);

		double ielts = (reading + listening + speaking + writing) / 4;

		cout << stp(1) << chuan_hoa(ielts) << endl;

	}

	return 0;
}