#include <iostream>
using namespace std;
int main()
{
    int t, count = 0;
    cin >> t;
    int s[t],d[t];
    for (int i = 0; i < t; i++)
    {
        cin>>s[i]>>d[i];
    }
    int i=0,j=0;
    for (i = 0; i < t; i++)
    {
        for (j = 0; j < t; j++)
        {
            if (s[i] == d[j])
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}