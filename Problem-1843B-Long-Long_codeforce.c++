
#include<iostream>
typedef long long ll;
using namespace std;
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
        ll sum=0,j=1,k=0;
        for(ll i=0; i<n; i++){
            sum+=abs(s[i]);
            if(s[i]<0){
                k=j;
            }
            else if(s[i]>0 && k==j){
                j+=1;
            }
        }
        cout<<sum<<" "<<k<<endl;
    }
    return 0;
}