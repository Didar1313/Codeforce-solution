#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,count=0;
        cin >> n;
        int s[n];
        for(int i=0; i<n; i++){
            cin>>s[i];
        }
        sort(s,s+n);
        int min=s[0];
        for(int i=0; i<n; i++){
            if(s[i]==min){
                count++;
            }
        }
        if(count==n){
            cout<<"-1"<<endl;
        }
        else{
            cout<<count<<" "<<n-count<<endl;
            for(int i=0; i<count; i++){
                cout<<s[i]<<" ";
            }
            cout<<endl;
            for(int i=count; i<n; i++){
                cout<<s[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}