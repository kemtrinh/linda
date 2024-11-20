#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int arr[a], brr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            brr[i] = arr[i];
        }
        sort(arr, arr + a);
        sort(brr, brr + a, greater<int>());
        for (int i = 0; i < a/2; i++)
        {
            
            cout << brr[i] << " ";
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}