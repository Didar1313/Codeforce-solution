#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
int main(){

   ll n,max=0;
   cin>>n;
   ll s[n];
   for(ll j=0; j<n; j++){
        cin>>s[j];
     }
     sort(s,s+n);
     if(s[n-1]!=1){
        s[n-1]=1;
     }
     else{
        s[n-1]=2;
     }
     sort(s,s+n);
    for(ll i=0; i<n; i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    return 0;
}