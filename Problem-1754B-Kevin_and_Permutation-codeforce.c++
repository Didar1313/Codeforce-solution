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
        if(n<=3){
            for(int i=1; i<=n; i++){
                cout<<i<<" ";
            }
            cout<<endl;
            continue;
        }
        int first=n/2,last=n;
        if(n&1){
            last--;
        }
        for (int i = 1; i<=n/2; i++)
        {
            cout<<first<<" "<<last<<" ";
            first--;
            last--;
        }
        if(n&1){
            cout<<n<<endl;
        }
        else{
            cout<<endl;
        }
    }
    return 0;
}