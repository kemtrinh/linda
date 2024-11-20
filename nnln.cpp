#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a == 1 && b == 0)
        cout << 0 << " " << 0;
    else if (a == 0 || b > a * 9)
        cout << -1 << " " << -1;
    else
    {
        for (int i = pow(10, a - 1); i < pow(10, a) - 1; i++)
        {
            if (i / 10 + i % 10 == b)
            {
                cout << i << " " (i%10)*10 + i/10;;
            }
                
        }
    }
}