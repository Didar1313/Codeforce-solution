#include <iostream>
using namespace std;
int main()
{
    string s;
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        int len;
        cin >> len;
        cin >> s;
        int count = 0;
        for (int i = 0; i < len - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                for (int j = i + 2; j < len; j++)
                {
                    if (s[i] == s[j])
                    {
                        count = 1;
                        break;
                    }
                }
            }
            if (count == 1)
            {
                break;
            }
        }
        if (count == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}