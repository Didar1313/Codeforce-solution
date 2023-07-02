#include <iostream>
using namespace std;


#define INF 100000000

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a = INF, b = INF, c = INF;

        for (int i = 0; i < n; i++)
        {
            int x;
            string s;
            cin >> x >> s;
            if (s == "11")
            {
                c = min(c, x);
            }
            else if (s == "01")
            {
                b = min(b, x);
            }
            else if (s == "10")
            {
                a = min(a, x);
            }
        }

        int ans = min(c, a + b);

        if (ans >= INF)
            ans = -1;

        cout << ans << endl;
    }
    return 0;
}
