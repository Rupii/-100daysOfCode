#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void countSort(int arr[], int n, int B[], int K)
{
    int C[K];
    for (int i = 0; i < K; i++)
        C[i] = 0;
    for (int i = 0; i < n; i++)
    {
        C[arr[i]] = C[arr[i]] + 1;
    }
    // for (int i = 0; i < K; i++)
    // cout << C[i];
    for (int j = 0, i = 0; i < K; i++)
    {

        if (C[i] && j < n)
        {
            B[j] = i;
            j++;
        }
    }
}
int main()
{
    int arr[] = {3, 5, 2, 10, 4, 9};
    int B[6] = {0, 0, 0, 0, 0, 0};
    countSort(arr, 6, B, 20);
    for (int i = 0; i < 6; i++)
        cout
            << B[i];
    return 0;
}