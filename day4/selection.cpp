#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void selection(int arr[], int n)
{
    int index;
    for (int i = 0; i < n - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < n; j++)
            if (arr[index] > arr[j])
                index = j;

        arr[index] ^= arr[i] ^= arr[index] ^= arr[i];
    }
}
int main()
{
    int arr[4] = {4, 2, 7, 1};
    selection(arr, 4);
    for (int i = 0; i < 4; i++)
        cout << arr[i] << " ";
    return 0;
}