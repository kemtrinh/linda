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

struct Group {
    string name;
    int point;
};

bool cmp(Group& a, Group& b) {
    if (a.point > b.point) return 1;
    if (a.point < b.point) return 0;
    if (a.name < b.name) return 1;
    if (a.name > b.name) return 0;
    return 0;
}
bool Isdigit(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (!isdigit(s[i])) return false;
    }
    return true;
}
int main() {
    // freopen("input.txt", "r", stdin);
    string s;

    map<string, int> mp;
    //int i = 0;
    while (getline(cin, s)) {
        /*i++;
        if (i == 11) break;*/
        stringstream ss(s);
        string tmp;

        string A = "";

        while (ss >> tmp) {
            if (Isdigit(tmp)) break;
            A = A + tmp + " ";
        }
        A.pop_back();
        mp[A] += stoi(tmp);

        ss >> tmp;
        ss >> tmp;
        int B_score = stoi(tmp);
        string B = "";
        while (ss >> tmp) B = B + tmp + " ";
        B.pop_back();
        mp[B] += B_score;
    }

    vector<Group> v;

    for (auto group : mp) {
        v.push_back({ group.first, group.second });
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i].name << " " << v[i].point << endl;
    }

    return 0;
}