#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll a[n + 1];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        bool ok = true;

        for (ll i = 2; i <= n - 1; i++)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                ok = false;
                cout << "YES" << endl;
                cout << i - 1 << " " << i << " " << i + 1 << endl;
                break;
            }
        }
        if (ok)

        {
            cout << "NO" << endl;
        }
    }
}