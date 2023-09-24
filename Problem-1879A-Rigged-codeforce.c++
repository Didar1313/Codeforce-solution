#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }
        int w = a[0], count = 0;
        ;
        for (int i = 1; i < n; i++)
        {
            if (a[i] >= w)
            {
                if (b[i] >= b[0])
                {
                    count = 1;
                    break;
                }
            }
        }
        if (count == 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << w << endl;
        }
    }
    return 0;
}