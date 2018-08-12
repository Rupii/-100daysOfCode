#include <iostream>
#include <bits/stdc++.h>
// effecient with O(n) complexity
using namespace std;
int maxSubArray(int arr[], int n)
{
    int sum = 0, best = 0;
    for (int i = 0; i < n; i++)
    {
        sum = max(arr[i], sum + arr[i]);
        best = max(best, sum);
    }
    return best;
}
int main()
{
    int arr[] = {-1, 2, 3, -2, 4, -3};
    int n = sizeof(arr) / sizeof(int);
    cout << maxSubArray(arr, n);
    return 0;
}