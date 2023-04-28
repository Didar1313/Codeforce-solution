#include <iostream>
using namespace std;
int main()
{
    int t, count = 1;
    cin >> t;
    int s[t+1];
    for (int j = 0; j < t; j++)
    {
        int  res = 0, sum = 0, a, b, c, d;
        cin >> a >> b >> c >> d;
        sum = a + b + c + d;
        s[j] = sum;
    }
    for (int i = 1; i < t; i++)
    {
        if (s[0] < s[i])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}