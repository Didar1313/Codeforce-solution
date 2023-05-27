#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, d;
        cin >> s;
        int len = s.length();
        if (len > 2)
        {
            d+=s[0];

            for (int i = 1; i < len; i++)
            {
                if (i % 2 == 0)
                {
                    d += s[i];
                }
            }
            d+=s[len-1];
            cout<<d<<endl;
        }

        else
        {
            cout << s << endl;
        }
    }
    return 0;
}