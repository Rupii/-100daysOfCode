#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {20, 30, 40, 23, 15};
    make_heap(v.begin(), v.end());
    sort_heap(v.begin(), v.end());
    for (int i : v)
        cout << i << " ";
    return 0;
}