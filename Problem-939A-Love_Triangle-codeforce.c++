#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin>>n;
    ll s[n];
    for(ll i=1; i<=n; i++){
        cin>>s[i];
    }
    bool count=0;
    for(ll i=1; i<=n; i++){
        if(s[s[s[i]]]==i){
            count=1;
            break;
        }
    }
    cout<<(count ? "YES" : "NO")<<endl;
    return 0;
}