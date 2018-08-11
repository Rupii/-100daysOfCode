#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void merge(int arr[], int p, int q, int r){
    int n1 = q-p;
    int n2 = r-q;
    int *l = new int[n1+1];
    int *r = new int[n2+1];
    for(int i =p;i<n1;i++)

}
void mergeSort(int arr[], int p, int q)
{
    if (p<q){
        mid = (p+q)/2;
        mergeSort(arr,p, mid-1);
        mergeSort(arr, mid, q);
        merge(arr, p, q, r);
    }
}
int main()
{
    int arr[6] = {8, 4, 6, 2, 1, 4};
    mergeSort(arr, 0, 6);
    for (int i =0;i<6;i++)
        cout << arr[i] << " ";
    return 0;
}