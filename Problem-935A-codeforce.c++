#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll n,count=0;
    cin>>n;
    for(ll i=2; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}