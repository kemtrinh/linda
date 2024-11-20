#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstring>
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
#define N 201
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
    string s;
    cin >> s;

    int i = 0;
    string result = "";
    while (i < s.length()) {
        if (isdigit(s[i])) {
            string tmp = "";
            while (isdigit(s[i])) {
                tmp = tmp + s[i];
                i++;
            }
            while (tmp[0] == '0' && tmp.length() > 1) tmp.erase(0, 1);
            if (tmp.length() > result.length()) result = tmp;
            else if (tmp.length() == result.length() && tmp.compare(result) > 0) result = tmp;
        }
        else i++;
    }

    cout << result << endl;

    return 0;
}