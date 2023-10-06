#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a = 0, b = 0;
        for (int i = 1; i < n; i++)
        {
            if (i < n / 2)
            {
                a += pow(2, i);
            }
            else
            {
                b += pow(2, i);
            }
        }
        a += pow(2, n);
        cout << a - b << endl;
    }
    return 0;
}