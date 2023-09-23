
#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        string s, t = "";
        cin >> s;
        for (int i = 0; i < 9; i++)
        {
            if (s[i] == '1')
            {
                t += '1';
            }
            else if (s[i] == '3')
            {
                t += '3';
            }
        }
        cout << t << endl;
    }
    return 0;
}