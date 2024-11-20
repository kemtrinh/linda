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
#include <unordered_map>
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

int main() {
	int n;
	cin >> n;

	cin.ignore();

	string s;
	string x;
	bool flag = true;

	unordered_map<string, int> mp;

	for (int i = 0; i < n; i++) {
		if (flag == true) {
			getline(cin, s);
			flag = false;
		}
		else {
			getline(cin, x);
			if (x == "") {
				flag = true;
				i--;
			}
			else mp[s]++;
		}
	}

	for (auto i : mp) {
		cout << i.first << ": " << i.second << endl;
	}
	return 0;
}