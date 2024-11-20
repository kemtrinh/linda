#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    long long arr[a];
    int res = 0;
    for(int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < a-1; i++)
    {
        if(arr[i] >= arr[i+1]) 
        {
            int k = arr[i] - arr[i+1];
            int d = k / b;
            arr[i+1] += d * b;
            res += d + 1;
        }
    }
    cout << res;
    return 0;
}