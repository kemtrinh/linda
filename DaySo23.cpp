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
    ll n;
    cin >> n;

    ll f[N];
    f[1] = 1;
    f[2] = 1;

    for (ll i = 3; i <= n; i++) {
        f[i] = (2 * f[i - 1] + 3 * f[i - 2]) % MOD;
    }

    cout << f[n] << endl;

    return 0;
}