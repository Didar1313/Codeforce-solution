#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n,count = 1;
        cin >> x >> y >> n;
        vector<int> s(n);
        s[n - 1] = y;
        s[0] = x;
        for (int i = n - 2; i >= 1; i--)
        {
            s[i] = s[i + 1] - count;
            count++;
        }
        if ((s[1] - s[0]) > (s[2] - s[1]))
        {
            for (int i = 0; i < n; i++)
            {
                cout << s[i] << " ";
            }
        }
        else
        {
            cout << "-1";
        }
        cout << endl;
    }
}