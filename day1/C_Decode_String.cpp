#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string t = "";
        for (int i = 0; i < s.length();)
        {
            int num;
            if (i + 2 < s.length() && s[i + 2] == '0')
            {
                if (i + 3 < s.length() && s[i + 3] == '0')
                {
                    num = s[i] - '0';
                    i++;
                }
                else
                {
                    num = (s[i] - '0') * 10 + (s[i + 1] - '0');
                    i += 3;
                }
            }
            else
            {
                num = s[i] - '0';
                i++;
            }
            t += char(num + 'a' - 1);
        }
        cout << t << endl;
    }
    return 0;
}
