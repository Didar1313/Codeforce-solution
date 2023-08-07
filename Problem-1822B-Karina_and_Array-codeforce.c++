#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll s[n];
        for(ll i=0; i<n; i++){
            cin>>s[i];
        }
        sort(s,s+n);
        ll first=s[0]*s[1];
        ll sec=s[n-1]*s[n-2];
        if((s[0]<0 && s[1]<0) && first>=sec){
            cout<<s[0]*s[1]<<endl;
        }
        else{
            cout<<s[n-1]*s[n-2]<<endl;
        }
    }
    return 0;
}