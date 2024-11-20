#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a;
        cin >> a;
        long long r = 1;
        for (long long i = 1; i <= a; i++)
        {
            long long g = __gcd(r, i);
            r = r * i / g;
        }
        cout << r << endl;
    }
}