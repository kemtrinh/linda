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

struct Phim {
	int id;
	string id_tl, day, ten;
	string the_loai;
	int so_tap;
	int ngay, thang, nam;
};

int cmp_ngay(Phim a, Phim b) {
	if (a.nam == b.nam) {
		if (a.thang == b.thang) {
			if (a.ngay == b.ngay) {
				return 0;
			}
			else return a.ngay < b.ngay;
		}
		else return a.thang < b.thang;
	}
	else return a.nam < b.nam;
}

bool cmp(Phim a, Phim b) {
	if (cmp_ngay(a, b) == 0) {
		if (a.ten == b.ten) {
			return a.so_tap >= b.so_tap;
		}
		else return a.ten < b.ten;
	}
	else return cmp_ngay(a, b);
}

int main() {
	int cnt = 0;
	int n, m;
	cin >> n >> m;

	map<int, string> mp;

	cin.ignore();

	for (int i = 0; i < n; i++) {
		string s;
		getline(cin, s);
		mp[i + 1] = s;
	}

	struct Phim ds[1000];

	for (int i = 0; i < m; i++) {
		cnt++;
		if (cnt > 1) cin.ignore();
		ds[i].id = cnt;
		getline(cin, ds[i].id_tl);
		ds[i].the_loai = mp[stoi(ds[i].id_tl.substr(2, 3))];
		getline(cin, ds[i].day);
		getline(cin, ds[i].ten);
		cin >> ds[i].so_tap;

		stringstream ss(ds[i].day);
		string tmp = "";
		getline(ss, tmp, '/');
		ds[i].ngay = stoi(tmp);
		getline(ss, tmp, '/');
		ds[i].thang = stoi(tmp);
		getline(ss, tmp, '/');
		ds[i].nam = stoi(tmp);

	}

	sort(ds, ds + m, cmp);

	for (int i = 0; i < m; i++) {
		cout << "P" << zero(3) << ds[i].id << " " << ds[i].the_loai << " "
			<< ds[i].day << " " << ds[i].ten << " " << ds[i].so_tap << endl;
	}

	return 0;
}