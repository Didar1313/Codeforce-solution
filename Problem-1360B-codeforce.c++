#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        ll x;
        cin>>x;
        ll s[x+1];
        for(ll j=0; j<x; j++){
            cin>>s[j];
        }
        sort(s,s+x);
        int dif=INT_MAX;
        for(ll i=1; i<x; i++){
            if(dif>s[i]-s[i-1]){
                dif=s[i]-s[i-1];
            }
        }
        cout<<dif<<endl;
    }
    return 0;

}