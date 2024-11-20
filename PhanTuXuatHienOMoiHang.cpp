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
    int n;
    cin >> n;
    int arr[N][N];

    set<int> st;
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            st.insert(arr[i][j]);
        }
        for (auto x : st) {
            mp[x]++;
        }
        st.clear();
    }

    bool check = false;

    for (auto x : mp) {
        if (x.second == n) {
            cout << x.first << " ";
            check = true;
        }
    }

    if (!check) cout << "NOT FOUND";
    return 0;
}