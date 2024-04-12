/*
 * @Author: snake qzrobotsnake@gmail.com
 * @Date: 2024-03-16 07:52:49
 * @LastEditors: snake qzrobotsnake@gmail.com
 * @LastEditTime: 2024-04-06 08:45:10
 * @FilePath: \cppDemo\src\main.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    long long x, n;
    cin >> x >> n;
    long long target = 1LL << n;
    long long l = 0, r = 1e9;
    while (l < r)
    {
        long long mid = (l + r) / 2;
        if (x * (1 - pow(x ^ 2 / 4, mid)) / (1 - x ^ 2 / 4) >= target)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (x * (1 - pow(x ^ 2 / 4, l)) / (1 - x ^ 2 / 4) >= target)
    {
        cout << l << endl;
    }
    else
    {
        cout << "inf" << endl;
    }
    return 0;
}
