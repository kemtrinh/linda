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

map<string, int> tong;

class Xe {
public:
	string bien;
	char loaiXe[100];
	int num;
	string ngay;
	char trangthai[100];
public:
	Xe() {

	}
	Xe(string bien, char loaiXe[100], int num, char trangthai[100], string ngay) {
		this->bien = bien;
		strcpy(this->loaiXe, loaiXe);
		this->num = num;
		this->ngay = ngay;
		strcpy(this->trangthai, trangthai);
	}
};

bool comp(Xe& x1, Xe& x2) {
	return (x1.ngay > x2.ngay);
}

void tinhTien(Xe xe) {
	if (strcmp(xe.trangthai, "OUT") == 0) return;
	if (strcmp(xe.loaiXe, "Xe_con") == 0) {
		if (xe.num == 5) {
			tong[xe.ngay] += 10000;
		}
		else tong[xe.ngay] += 15000;
	}
	else if (strcmp(xe.loaiXe, "Xe_tai") == 0) {
		tong[xe.ngay] += 20000;
	}
	else if (strcmp(xe.loaiXe, "Xe_khach") == 0) {
		if (xe.num == 29) tong[xe.ngay] += 50000;
		else tong[xe.ngay] += 70000;
	}
}

int main() {

	int n1;
	cin >> n1;

	string a;
	char b[100];
	string ngay;
	int n;
	char trangthai[100];

	vector<Xe> x(n1);

	for (int i = 0; i < n1; i++) {
		cin >> a >> b >> n >> trangthai >> ngay;
		x.push_back({ a, b, n, trangthai, ngay });
	}


	sort(x.begin(), x.end(), comp);

	/*FOR(i, 0, n1 - 1) {
		cout << x[i].bien << " " << x[i].loaiXe << " " << x[i].num << " " << x[i].ngay << " " << x[i].trangthai << endl;
	}*/


	for (int i = 0; i < n1; i++) {
		tinhTien(x[i]);
	}

	for (auto i : tong) {
		cout << i.first << ": " << i.second << endl;
	}

	return 0;
}