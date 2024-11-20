#include <bits/stdc++.h>
using namespace std;

void viethoa(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = toupper(s[i]);
    }
}

void chuanhoa(string &s)
{
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string kem;
    vector<string> v;
    while (ss >> kem)
        v.push_back(kem);
    for (int i = 0; i < v.size() - 1; i++)
    {
        chuanhoa(v[i]);
        cout << v[i];
        if (i == v.size() - 2)
            cout << ", ";
        else
            cout << " ";
    }
    viethoa(v[v.size() - 1]);
    cout << v[v.size() - 1];
    return 0;
}