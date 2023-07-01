#include <iostream>
#include <iterator>
#include<vector>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        vector<int> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        vector<int> even,odd;
        for (int i = 0; i < n; i++)
        {
            if (s[i] % 2 == 0)
            {
                even.push_back(s[i]);
            }
            else
            {
                odd.push_back(s[i]);
            }
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        bool eve = true, od = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] % 2 == 0)
            {
                continue;
            }
            if (odd[0] >= s[i])
            {
                eve = false;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] % 2 != 0)
            {
                continue;
            }
            if (odd.empty() or odd[0] >= s[i])
            {
                od  = false;
                break;
            }
        }
        if(eve or od){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}