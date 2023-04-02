#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int s;
        cin >> s;
        for (int j = 1;;j++)
        {
            if (j%3 == 0 || j%10 == 3)
            {
                continue;
            }
            else
            {
                --s;
                if (s == 0)
                {
                    cout << j << endl;
                    break;
                }
            }
        }
    }
    return 0;
}