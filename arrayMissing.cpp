#include <bits/stdc++.h>
using namespace std;

int MissNo(int arr[], int n)
{
    
    int x1 = arr[0];
    
    int x2 = 0;
    for (int i = 1; i < n; i++)
        x1 = x1 ^ arr[i];
    for (int i = 1; i <= n; i++)
        x2 = x2 ^ i;
    return (x1 ^ x2);
}

int main()
{
    int arr[] = {3,0,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int number = MissNo(arr, n);
    cout <<"The missing number = "<<number;
}