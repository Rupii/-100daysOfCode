#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 3;

    vector<int> subset;
    for (int b = 0; b < (1 << n); b++)
    {
        for (int i = 0; i < n; i++)
        {
            if (b & (1 << i))
                subset.push_back(i);
        }
    }
    for (auto i : subset)
    {
        cout << i << endl;
    }
    return 0;
}