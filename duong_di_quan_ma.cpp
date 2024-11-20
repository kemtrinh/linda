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
#define N 101
#define MOD (long long)1000000007
#define ll long long
#define ld long double
#define sz size()
#define F(i, a, b) for (int i = a; i < b; i++)
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define zero(n) setw(n) << setfill('0')
#define stp(n) fixed << setprecision(n)

int n;
int s, t, u, v;
int arr[N][N];

bool isValid(int x, int y) {
    return (x >= 0 && x < n&& y >= 0 && y < n&& arr[x][y]);
}

void move(int s, int t, int u, int v) {
    //cout << s + 1 << " " << t + 1 << endl;
    arr[s][t] = 0;
    //if (s == u && t == v) return true;
    //else {
    if (isValid(s - 1, t + 2)) move(s - 1, t + 2, u, v);
    if (isValid(s - 2, t + 1)) move(s - 2, t + 1, u, v);
    if (isValid(s - 2, t - 1)) move(s - 2, t - 1, u, v);
    if (isValid(s - 1, t - 2)) move(s - 1, t - 2, u, v);

    if (isValid(s + 1, t - 2)) move(s + 1, t - 2, u, v);
    if (isValid(s + 2, t - 1)) move(s + 2, t - 1, u, v);
    if (isValid(s + 2, t + 1)) move(s + 2, t + 1, u, v);
    if (isValid(s + 1, t + 2)) move(s + 1, t + 2, u, v);
    //}
}

int main() {
    cin >> n;

    cin >> s >> t >> u >> v;
    s--, t--, u--, v--;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    if (arr[s][t] == 1 && arr[u][v] == 1) {
        move(s, t, u, v);
        if (arr[u][v] == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    else cout << "ANO\n";
    return 0;
}