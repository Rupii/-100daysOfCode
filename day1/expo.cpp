#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long x = 1e+3;

    cout << x << "\n";
    int y = 2;
    for (int i = 31; i >= 0; i--)
        (y | (1 << i)) ? cout << "1" : cout << "0";

    int a = 3, b = 2;
    int c = a /  b;
    cout << endl
         << c;
    return 0;
}