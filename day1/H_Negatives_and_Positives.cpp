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
        vector<ll> a(n);
        ll ng = 0, ans = 0, mn = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                ng++;
            }
            ans += abs(a[i]);
            mn = min(mn, abs(a[i]));
        }

        if (ng % 2 == 1)
            ans -= (2LL * mn);

        cout << ans << endl;
    }
}