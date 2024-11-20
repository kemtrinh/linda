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

class Customer {
public:
	int id;
	string fullName;
	double discount;
	int invoiceId;
	double amount;
};

class Invoice {
public:
	int id;
	Customer customer;
	double amount;
};

bool cmp(Invoice& a, Invoice& b) {
	if (a.amount > b.amount) return 1;
	if (a.amount < b.amount) return 0;
	if (a.customer.id < b.customer.id) return 1;
	if (a.customer.id > b.customer.id) return 0;
	return 0;
}

int main() {
	//freopen("input.txt", "r", stdin);
	int n;
	cin >> n;

	vector<Customer> customers(n);
	vector<Invoice> invoices(n);


	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		cin.ignore();
		getline(cin, tmp);
		tmp.erase(0, 13);
		customers[i].id = stoi(tmp);

		getline(cin, customers[i].fullName);
		customers[i].fullName.erase(0, 12);

		getline(cin, tmp);
		tmp.erase(0, 10);
		customers[i].discount = stoi(tmp);

		getline(cin, tmp);
		tmp.erase(0, 12);
		customers[i].invoiceId = stoi(tmp);

		getline(cin, tmp);
		tmp.erase(0, 8);
		customers[i].amount = stod(tmp);


		invoices[i].id = customers[i].id;
		invoices[i].customer = customers[i];
		invoices[i].amount = customers[i].amount * (100 - customers[i].discount) * 0.01;
	}

	sort(invoices.begin(), invoices.end(), cmp);

	for (int i = 0; i < n; i++) {
		cout << "Customer ID : " << invoices[i].customer.id << endl;
		cout << "Full Name : " << invoices[i].customer.fullName << endl;
		cout << "Amount : " << stp(2) << invoices[i].amount << " $" << endl;
		cout << "--------------------" << endl;
	}

	return 0;
}