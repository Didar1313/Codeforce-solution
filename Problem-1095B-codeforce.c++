#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    ll s[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    

        sort(s, s + n);
        ll sum=0;
        sum=s[n - 2] - s[0];
        sum=min(sum,(s[n-1]-s[1]));

        cout << sum << endl;
    

    return 0;
}