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
#include <climits>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <stack>
using namespace std;

#define MAX 1000000000 + 5
//#define M 100 + 5
#define N 1000001
#define MOD (long long)1000000007
#define ll long long
//#define int long long
#define ld long double
#define sz size()
#define F(i, a, b) for (int i = a; i < b; i++)
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define zero(n) setw(n) << setfill('0')
#define stp(n) fixed << setprecision(n)

int main() {
    long long n;
    cin >> n;

    long long arr[N];

    map<long long, long long> mp;

    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i] % 28]++;
    }

    long long res = 0;

    for (long long i = 0; i <= 27; i++) {
        if (mp[i]) {
            //cout << i << " " << mp[i] << endl;
            if (i == 0 || i == 14) {
                res += mp[i] * (mp[i] - 1) / 2;
                mp[i] = 0;
            }
            else {
                res += mp[i] * mp[28 - i];
                mp[i] = 0;
                mp[28 - i] = 0;
            }
        }
    }

    cout << res << endl;
    return 0;
}