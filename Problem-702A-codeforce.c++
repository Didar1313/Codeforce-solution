#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    ll s[n];
    ll max = 1, count = 1;
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i-1]<s[i])
        {
            count++;
        }
        else
        {
            if (count > max)
            {
                max = count;
            }
            count = 1;
        }
        if(count>max){
            max=count;
        }
        
    }
    cout << max << endl;

    return 0;
}
