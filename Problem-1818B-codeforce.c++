#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, count = 0;
        cin >> n;
        int s[n+1];
        for (int i = 1; i <= n; i++)
        {
            sum += i;
            s[i] = i;
        }
        if (n > 1)
        {
            count = (s[n] - s[1]) + 1;
            if (sum % count == 0)
            {
                cout << "-1" << endl;
            }
            else
            {
                for(int i=1; i<=n-1; i++){
                    
                    cout<<s[i+1]<<" "<<s[i]<<" ";
                    i++;
                }
                cout<<endl;
            }
        }
        else
        {
            cout << "1" << endl;
        }
    }
    return 0;
}