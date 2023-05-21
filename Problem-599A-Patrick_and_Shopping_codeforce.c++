#include <iostream>
using namespace std;
typedef long long ll;
int main()
{

    ll a, b, c, mini = 0, mini2 = 0,mini3=0, sum = 0,sum2=0;
    cin >> a >> b >> c;
    mini = min((a + (a + b + b)), (b + (b + a + a)));
    mini2 = min((a + c + b), (b + c + a));
    mini3=min((a+c+c+a),(b+c+c+b));
    sum = min(mini, mini2);
    sum2=min(sum,mini3);
    cout << sum2 << endl;

    return 0;
}