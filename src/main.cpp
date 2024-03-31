/*
 * @Author: snake qzrobotsnake@gmail.com
 * @Date: 2024-03-16 07:52:49
 * @LastEditors: snake qzrobotsnake@gmail.com
 * @LastEditTime: 2024-03-31 13:49:51
 * @FilePath: \cppDemo\src\main.cpp
 */
#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a;
        cin >> a;
        if (a >= 0 && a < 64)
            cout << 1 << endl;
        else if (a < 128)
            cout << 1 << endl;
        else if (a < 192)
            cout << 0 << endl;
        else if (a < 256)
            cout << 1 << endl;
        else if (a < 320)
            cout << 0 << endl;
        else if (a < 384)
            cout << 1 << endl;
        else if (a < 448)
            cout << 0 << endl;
        else if (a < 512)
            cout << 1 << endl;
    }
    return 0;
}
/*
64

*/