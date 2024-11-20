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
	string ten;
	ll luong_co_ban;
	int ngay_cong;
	string chuc_vu;
	getline(cin, ten);
	cin >> luong_co_ban >> ngay_cong;
	cin.ignore();
	getline(cin, chuc_vu);

	ll tien_luong = luong_co_ban * ngay_cong;

	cout << "NV01" << " " << ten << " " << (ll)luong_co_ban * ngay_cong << " ";


	if (ngay_cong >= 25) {
		cout << (20 * tien_luong) / 100 << " ";
		tien_luong += (20 * tien_luong) / 100;
	}
	else if (ngay_cong >= 22) {
		cout << (10 * tien_luong) / 100 << " ";
		tien_luong += (10 * tien_luong) / 100;
	}
	else cout << 0 << " ";

	if (chuc_vu == "GD") {
		tien_luong += 250000;
		cout << 250000 << " ";
	}
	else if (chuc_vu == "PGD") {
		cout << 200000 << " ";
		tien_luong += 200000;
	}
	else if (chuc_vu == "TP") {
		cout << 180000 << " ";
		tien_luong += 180000;
	}
	else if (chuc_vu == "NV") {
		cout << 150000 << " ";
		tien_luong += 150000;
	}

	cout << tien_luong << endl;


	return 0;
}