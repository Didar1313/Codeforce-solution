#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == 'B' || s.length() < 2 || s[s.length() - 1] == 'A')
        {
            cout << "NO" << endl;
            continue;
        }

        int count = 0;
        bool possible = true;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='A'){
                count++;
            }
            else {
                count--;
            }
            if (count < 0)
            {
                possible = false;
                break;
            }
        }
        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}