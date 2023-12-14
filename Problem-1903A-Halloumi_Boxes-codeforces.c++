#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int s[n], copy[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            copy[i] = s[i];
        }
        sort(s,s+n);

        if (k >= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (equal(s,s+n,copy))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}