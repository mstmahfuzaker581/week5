#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool flag = false;
        int n = s.length() / 2;

        for (int i = 0; i < s.length() / 2 - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}