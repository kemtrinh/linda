#include <bits/stdc++.h>
using namespace std;
#define faster()                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define endl "\n";

void chuandate(string &s)
{
    if (s[2] != '/')
        s.insert(0, "0");
    if (s[5] != '/')
        s.insert(3, "0");
}

struct SinhVien
{
    string name;
    string lop;
    string date;
    double gpa;
    string id;
};

void nhap(SinhVien ds[], int n, ifstream &fileIn)
{
    for (int i = 0; i < n; i++)
    {
        getline(fileIn >> ws, ds[i].name);
        getline(fileIn >> ws, ds[i].lop);
        getline(fileIn >> ws, ds[i].date);
        fileIn >> ds[i].gpa;
        chuandate(ds[i].date);
    }
}

void in(SinhVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i + 1 < 10)
        {
            ds[i].id = "B20DCCN00" + to_string(i + 1);
        }
        else
        {
            ds[i].id = "B20DCCN0" + to_string(i + 1);
        }
        cout << ds[i].id << " " << ds[i].name << " " << ds[i].lop << " " << ds[i].date << " " << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}

int main()
{
    ifstream fileIn("SV.in");
    if (fileIn.is_open())
    {
        SinhVien ds[50];
        int n;
        fileIn >> n;
        nhap(ds, n, fileIn);
        in(ds, n);
        fileIn.close();
    }
    return 0;
}

