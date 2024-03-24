#include <iostream>
using namespace std;
char s[3010];
int n, p, q;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    int a = 1;
    int b = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= i + 79 && j <= n; j++)
        {
            if (s[a] == s[b])
            {
                p = a;
                q = b;
                while (s[p] == s[q])
                {
                    p++;
                    q--;
                }
                if (s[p] <= s[q])
                {
                    cout << s[a++];
                }
                else
                {
                    cout << s[b--];
                }
            }
            else
            {
                if (s[a] > s[b])
                {
                    cout << s[b--];
                }
                else
                {
                    cout << s[a++];
                }
            }
        }
        i += 79;
        cout << endl;
    }
    return 0;
}