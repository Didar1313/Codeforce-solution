
#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        ll result=0;
        ll s[x+3];
        
        for(ll i=0; i<x; i++){
            cin>>s[i];
        }
        sort(s,s+x);
        s[x]=s[0];
        for(int i=0; i<x; i++){
            result+=max(s[i],s[i+1]);
        }
        result+=x;
        if(result<=y){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}