/*
 * @Author: snake qzrobotsnake@gmail.com
 * @Date: 2024-03-16 07:52:49
 * @LastEditors: snake qzrobotsnake@gmail.com
 * @LastEditTime: 2024-03-21 10:08:05
 * @FilePath: \cppDemo\src\main.cpp
 */

#include <iostream>
using namespace std;
int f[1000][10000], a[10000], g[10000][10000];
void a21(int a[], int b[]) {
    for (int i = 1; i <= a[0]; i++) {
        b[i] = a[i] * 2;
    }
    b[1]++;
    for (int i = 1; i <= a[0]; i++) {
        b[i + 1] += b[i] / 10;
        b[i] %= 10;
    }
    if (b[a[0] + 1] > 0)
        b[0] = a[0] + 1;
    else
        b[0] = a[0];
}
void gmf0(int g[], int f0[], int f[]) {
    for (int i = 1; i <= g[0]; i++) {
        f[i] = g[i] - f0[i];
    }
    for (int i = 1; i <= g[0]; i++) {
        if (f[i] < 0) {
            f[i] += 10;
            f[i + 1]--;
        }
    }
    int l = 0;
    for (int i = g[0]; i >= 1; i--) {
        if (f[i] > 0) {
            l = i;
            break;
        }
    }
    f[0] = l;
}
void fu(int f0[], int f[]) {
    for (int i = 0; i <= f0[0]; i++)
        f[i] = f0[i];
}
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    g[1][0] = g[1][1] = 1;
    for (int i = 2; i <= n; i++)
        a21(g[i - 1], g[i]);
    if (a[1] != 0)
        f[1][0] = f[1][1] = 1;
    for (int i = 2; i <= n; i++) {
        if (a[i] == 0)
            fu(f[i - 1], f[i]);
        else
            gmf0(g[i], f[i - 1], f[i]);
    }
    for (int i = f[n][0]; i >= 1; i--)
        cout << f[n][i];
    return 0;
}