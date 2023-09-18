#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int len = n.size();
        for (int i = n.size() - 1; i >= 0; i--)
        {
            if (n[i] - '0' >= 5)
            {
                if (i == 0)
                {
                    n = '1' + n;
                    len = i + 1;
                }
                else
                {
                    n[i - 1]++;
                    len = i;
                }
            }
        }
        for(int j=len; j<n.size(); j++){
            n[j]='0';
        }
        cout<<n<<endl;
    }
    return 0;
}