#include <iostream>
#include <bits/stdc++.h>
// brute force or atleast not the best algo
// with time complexity O(n^2)
using namespace std;
int maxSubarray(int arr[], int n)
{
    int sum = 0;
    int result = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            sum += arr[j];
            result = max(result, sum);
        }
    }
    return result;
}
int main()
{
    int arr[] = {-1, 2, 3, -2, 4, -3};
    int n = sizeof(arr) / sizeof(int);
    cout << maxSubarray(arr, n);
    return 0;
}