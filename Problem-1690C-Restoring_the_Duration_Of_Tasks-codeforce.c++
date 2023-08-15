#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll f[n], s[n],d[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> f[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        d[0]=s[0]-f[0];
        for(ll i=1; i<n; i++){
            if(f[i]<s[i-1]){
                d[i]=s[i]-s[i-1];
            }
            else{
                d[i]=s[i]-f[i];
            }
        }
        for(ll i=0; i<n; i++){
            cout<<d[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}