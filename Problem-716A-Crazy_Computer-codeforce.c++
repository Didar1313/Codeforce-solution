#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll n,m;
    cin>>n>>m;
    ll s[n];
    for(ll i=0; i<n; i++){
        cin>>s[i];
    }
    sort(s,s+n);
    int count=1;
    for(ll i=0; i<n-1; i++){
        if(s[i+1]-s[i]<=m){
            count++;
        }
        else{
            count=1;
        }
    }
    cout<<count<<endl;
    return 0;
}