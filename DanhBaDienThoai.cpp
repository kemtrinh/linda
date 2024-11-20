#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
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

struct danhba {
	string ten;
	string lastName;
	string fistName;
	string ngay;
	string sdt;
	string ho_dem;
};

bool cmp(danhba a, danhba b) {
	if (a.lastName < b.lastName) return 1;
	if (a.lastName > b.lastName) return 0;
	if (a.fistName < b.fistName) return 1;
	if (a.fistName > b.fistName) return 0;
	return 0;
}

int main() {
	ifstream fi("SOTAY.txt");
	ofstream fo("DIENTHOAI.txt");

	string s;
	string day;
	int i = 0;

	struct danhba ds[1000];
	int n = 0;

	while (getline(fi, s)) {
		if (s.substr(0, 4) == "Ngay") {
			day = s.substr(5);
		}
		else {
			ds[n].ngay = day;
			ds[n].ten = s;

			stringstream ss(s);
			vector<string> tu;
			string tmp;
			while (ss >> tmp) {
				tu.push_back(tmp);
			}
			string ho_dem = "";

			ds[n].lastName = tu[tu.size() - 1];

			for (int i = 0; i <= tu.size() - 2; i++) {
				ho_dem = ho_dem + tu[i] + " ";
			}

			ho_dem.pop_back();

			ds[n].fistName = ho_dem;

			getline(fi, s);
			ds[n].sdt = s;
			n++;
		}
	}

	sort(ds, ds + n, cmp);

	for (int i = 0; i < n; i++) {
		fo << ds[i].ten << ": " << ds[i].sdt << " " << ds[i].ngay << endl;
	}

	fi.close();
	fo.close();
	return 0;
}