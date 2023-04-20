#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll s[n],diff=0;
        for(ll i=0; i<n; i++){
            cin>>s[i];
        }
        sort(s,s+n);
        diff=s[n-1]-s[0];
        cout<<diff<<endl;
    }
    return 0;
}