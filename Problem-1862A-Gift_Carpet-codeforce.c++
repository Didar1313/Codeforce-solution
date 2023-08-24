#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> n >> m;
        char s[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>s[i][j];
            }
        }
        string ar = "vika";
        int a = 0, count = 0;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (s[j][i] == ar[a])
                {
                    a++;
                    break;
                }
            }
            if(a==4){
                break;
            }
        }
        if (a == 4)
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