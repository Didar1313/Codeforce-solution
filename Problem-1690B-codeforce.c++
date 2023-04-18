#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s[n], d[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }
        int count = 0, sum = 0;
        for(int i=0; i<n; i++){
            count=max(count,s[i]-d[i]);
        }

        for (int i = 0; i < n; i++)
        {
            s[i]=max(0,s[i]-count);
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] != d[i])
            {
                sum = 1;
                break;
            }
        }
        if (sum)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}