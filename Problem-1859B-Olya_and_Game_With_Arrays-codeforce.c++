#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, min2 = __LONG_LONG_MAX__, min1 = __LONG_LONG_MAX__;
        cin >> n;
        vector<vector<ll> > s(n);
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            for (int j = 0; j < m; j++)
            {
                ll x;
                cin >> x;
                s[i].push_back(x);
            }
        }
        for (int i = 0; i < n; i++)
        {
            sort(s[i].begin(), s[i].end());
        }
        for (int i = 0; i < n; i++)
        {
            min2 = min(s[i][1], min2);
            min1 = min(s[i][0], min1);
        }
        ll result = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i][1] == min2 && count == 0)
            {
                count++;
            }
            else
            {
                result += s[i][1];
            }
        }
        result += min1;
        cout << result << endl;
    }
    return 0;
}