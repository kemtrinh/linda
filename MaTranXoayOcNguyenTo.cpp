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

int prime[100000] = { 0 };
vector<int> prime_number;

void eras() {
	for (int i = 2; i < 1000; i++)
		if (!prime[i]) {
			for (int j = i * i; j < 100000; j += i) {
				prime[j] = 1;
			}
		}

	for (int i = 2; i < 100000; i++) {
		if (!prime[i]) {
			prime_number.push_back(i);
		}
	}

}

int main() {
	eras();
	int t;
	cin >> t;

	for (int test = 1; test <= t; test++) {
		
		int n;
		cin >> n;

		cout << "Test " << test << ":" << endl;

		int arr[20][20];

		int i = 0;
		int j = 0;
		int p = 0;
		int q = 0;
		int c = 0;

		bool check = true;

		while (c < n * n) {
			if (check) {
				for (int x = j; x < n - p; x++) {
					arr[i][x] = prime_number[c++];
				}

				j = n - 1 - p;

				for (int y = i + 1; y < n - q; y++) {
					arr[y][j] = prime_number[c++];
				}

				i = n - 1 - q;

				check = !check;
			}
			else {
				for (int x = j - 1; x >= p; x--) {
					arr[i][x] = prime_number[c++];
				}

				j = p;

				for (int y = i - 1; y >= q + 1; y--) {
					arr[y][j] = prime_number[c++];
				}

				i = q + 1;
				j = p + 1;

				p++;
				q++;

				check = !check;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) cout << arr[i][j] << " ";
			cout << endl;
		}
	}

	return 0;
}