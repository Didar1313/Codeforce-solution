#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char s[4];
        int count = 0;
        for(int i=0; i<4; i++){
            cin>>s[i];
        }
        sort(s,s+4);
        for (int i = 0; i < 4; i++)
        {
            if (s[i] != s[i + 1])
            {
                count++;
            }
        }
        cout << count - 1 << endl;
    }

    return 0;
}