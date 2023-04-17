#include<iostream>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll s[n],sum=0;
        for(int i=0; i<n; i++){
            cin>>s[i];
            sum+=s[i];
        }
        if(sum==m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}