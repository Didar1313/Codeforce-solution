#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll s1[n],s2[n],sum=0,min_s1=INT_MAX,min_s2=INT_MAX;
        for(ll i=0; i<n; i++){
            cin>>s1[i];
            min_s1=min(s1[i],min_s1);
        }
        for(ll i=0; i<n; i++){
            cin>>s2[i];
            min_s2=min(s2[i],min_s2);
        }
        
        for(ll i=0; i<n; i++){
            sum+=max(s1[i]-min_s1,s2[i]-min_s2);
        }

        cout<<sum<<endl;

    }
    return 0;
}