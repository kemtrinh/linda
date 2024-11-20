#include <bits/stdc++.h>
using namespace std;

struct ThiSinh
{
    string name, date;
    float a, b, c, s;
};

void nhap(ThiSinh &A)
{
    getline(cin, A.name);
    cin >> A.date >> A.a >> A.b >> A.c;
    A.s = A.a + A.b + A.c;
}

void in(ThiSinh A)
{
    cout << A.name << " " << A.date << " ";
    cout << fixed << setprecision(1) << A.s;
}

int main()
{
    ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}