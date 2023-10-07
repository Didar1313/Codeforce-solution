#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, result = 0, count = 0;
        cin >> a >> b >> c;
        while (a <= c && b<=c)
        {
            count++;
            if(a>b){
                b+=a;
            }
            else{
                a+=b;
            }
        }
        cout << count << endl;
    }
    return 0;
}