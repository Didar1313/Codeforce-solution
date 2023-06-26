#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s[n],sum1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
       sort(s,s+n);
       for(int i=0; i<n/2; i++){
        sum1+=abs(s[i]-s[n-i-1]);
       }
       cout<<sum1<<endl;

    }
    return 0;
}