#include<iostream>
#include<cmath>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll s[n],mini=0;
        for(ll i=0; i<n; i++){
            cin>>s[i];
        }
        ll count=LLONG_MAX;
        for(ll i=1; i<n; i++){
            if(s[i-1]>s[i]){
                count=0;
                break;
            }
            count=min(count,((s[i]-s[i-1])/2LL)+1LL);
        }
        cout<<count<<endl;
    }
    return 0;
}