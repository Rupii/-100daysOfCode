#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void insertion(int arr[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        cout << j + 1 << " ";
    }
}
int main()
{
    int arr[7] = {3, 7, 7, 2, 9, 4, 1};
    insertion(arr, 7);
    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";
    return 0;
}