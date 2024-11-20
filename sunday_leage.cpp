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
    string id;
    string name;
    int game, point, gf;
};

bool cmp(Group& a, Group& b) {
    if (a.gf > b.gf) return 1;
    if (a.gf < b.gf) return 0;
    if (a.point > b.point) return 1;
    if (a.point < b.point) return 0;
    if (a.id < b.id) return 1;
    if (a.id > b.id) return 0;
    return 0;
}

bool Isdigit(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (!isdigit(s[i])) return false;
    }
    return true;
}

int main() {
    //freopen("input.txt", "r", stdin);
    int doi_bong = 20;

    Group ds[20];

    for (int i = 0; i < doi_bong; i++) {
        string tmp;
        cin >> tmp;
        cin >> ds[i].id;
        cin.ignore();
        getline(cin, ds[i].name);
        cin >> ds[i].game >> ds[i].point >> ds[i].gf;
        cin >> tmp;
    }

    string s;
    cin.ignore();
    for (int i = 0; i < 10; i++) {
        getline(cin, s);
        stringstream ss(s);
        string tmp;

        string A = "";
        while (ss >> tmp) {
            if (Isdigit(tmp)) break;
            A = A + tmp + " ";
        }
        A.pop_back();

        int A_score = stoi(tmp);

        ss >> tmp;
        ss >> tmp;
        int B_score = stoi(tmp);
        string B = "";

        while (ss >> tmp) B = B + tmp + " ";
        B.pop_back();


        for (int j = 0; j < 20; j++) {
            if (A == ds[j].name) {
                ds[j].game++;
                ds[j].point += A_score - B_score;
                if (A_score > B_score) ds[j].gf += 3;
                else if (B_score == A_score) ds[j].gf += 1;
                break;
            }
        }

        for (int j = 0; j < 20; j++) {
            if (B == ds[j].name) {
                ds[j].game++;
                ds[j].point += B_score - A_score;
                if (B_score > A_score) ds[j].gf += 3;
                else if (B_score == A_score) ds[j].gf += 1;
                break;
            }
        }
    }


    sort(ds, ds + 20, cmp);

    for (int i = 0; i < 20; i++) {
        cout << "#" << i + 1 << " " << ds[i].id << " " << ds[i].name << " " << ds[i].game << " " << ds[i].point << " " << ds[i].gf << endl;
        cout << "------------------" << endl;
    }

    return 0;

}
