#include <bits/stdc++.h>
using namespace std;

bool nnh(int n)
{
	return (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
}

string sn(int k, const string &ns)
{
	int ng, th, n;
	char kem;
	stringstream ss(ns);
	ss >> ng >> kem >> th >> kem >> n;
	n += k;
	if (ng == 29 && th == 2 && !nnh(n))
		ng = 28;
	ostringstream kss;
	kss << setw(2) << setfill('0') << ng << "/" << setw(2) << setfill('0') << th << "/" << n;
	return kss.str();
}

int main()
{
	int t, n;
	string ns;
	cin >> t;

	while (t--)
	{
		cin >> n >> ns;
		cout << sn(n, ns) << endl;
	}
}