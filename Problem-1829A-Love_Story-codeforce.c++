#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_palindrome(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = 1;
        for (int x = 2; x <= 1000000000; x++)
        {
            vector<int> f(n);
            for (int i = 0; i < n; i++)
            {
                f[i] = a[i] % x;
            }
            if (is_palindrome(f))
            {
                ans = x;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
