#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    string s;
    cin >> s;
    string temp;
    int count = 0;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                temp[0] = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp[0];
                i++;
            }
        }
    }
    cout << s << endl;
    return 0;
}