#include <iostream>
#include<map>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        map<ll,ll>m;
        ll count=0;
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin>>temp;
            m[temp]++;
            count=max(count,m[temp]);

        }
        ll left = n - count;
        ll operations = left;
        while (left > 0)
        {
            operations++;
            left -= count;
            count *= 2;
        }
        cout << operations << endl;
    }
    return 0;
}