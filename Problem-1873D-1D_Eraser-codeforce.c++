#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        string m;
        cin >> s >> n;
        cin >> m;
        int result = 0;
        for (int i = 0; i < s; i++)
        {
            int count = 0;
            if (m[i] == 'B')
            {
                for (int j = i; j < s; j++)
                {
  
                    if (m[j] == 'B')
                    {
                        result++;
                        i+=n-1;
                        break;
                    }
                }
            }
        }
        cout << result << endl;
    }
    return 0;
}