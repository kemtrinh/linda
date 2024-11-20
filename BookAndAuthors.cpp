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
//#define N 101
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


struct Author {
    string name;
    string email;
    string gender;
};

struct Book {
    string name;
    int price;
    int quantity;
    vector<Author> authors;
};

bool cmp(Book& a, Book& b) {
    return a.name < b.name;
}

int main() {
    //freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    vector<Book> books(n);
    for (int i = 0; i < n; ++i) {
        cin.ignore();
        string tmp;
        getline(cin, tmp);
        getline(cin, books[i].name);
        cin >> books[i].price >> books[i].quantity;
        int num_authors;
        cin >> num_authors;
        books[i].authors.resize(num_authors);
        cin.ignore();
        for (int j = 0; j < num_authors; ++j) {
            getline(cin, books[i].authors[j].name);
            getline(cin, books[i].authors[j].email);
            getline(cin, books[i].authors[j].gender);
        }
    }

    sort(books.begin(), books.end(), cmp);

    for (auto book : books) {
        cout << "-----------------------\n";
        cout << "Book information :\n";
        cout << "Name : " << book.name << "\n";
        cout << "Price : " << book.price << "\n";
        cout << "Quantity : " << book.quantity << "\n";
        cout << "Author information :\n";
        int author_count = 1;
        for (auto author : book.authors) {
            cout << "#" << author_count++ << "\n";
            cout << "Name : " << author.name << "\n";
            cout << "Email : " << author.email << "\n";
            cout << "Gender : " << author.gender << "\n";
        }
    }

    return 0;
}
