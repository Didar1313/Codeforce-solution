#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int temp=n;
    if (n % 2 != 0)
    {
        n--;
    }
    cout << s[0] << s[1];
    for (int i = 2; i < n; i += 2)
    {
        cout << "-" << s[i] << s[i + 1];
    }
    if (temp % 2 != 0)
    {
        cout << s[temp - 1] << endl;
    }
    cout<<endl;

    return 0;
}