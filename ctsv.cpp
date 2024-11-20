#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
	string ten, lop, ngay;
	float gpa;
};

void nhap(SinhVien &a)
{
	getline(cin, a.ten);
	cin >> a.lop >> a.ngay >> a.gpa;
}

void in(SinhVien a)
{
	if(a.ngay[1] == '/')
	{
		a.ngay.insert(0,"0");
	}
	if(a.ngay[4] == '/')
	{
		a.ngay.insert(3,"0");
	}
	cout << "B20DCCN001 " << a.ten << " " << a.lop << " " << a.ngay << " ";
	cout << fixed << setprecision(2) << a.gpa;
}

	int main()
{
	struct SinhVien a;
	nhap(a);
	in(a);
	return 0;
}