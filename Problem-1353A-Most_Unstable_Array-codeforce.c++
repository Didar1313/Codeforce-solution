#include<iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(n==1){
            cout<<"0"<<endl;
        }
        else if(n==2){
            cout<<k<<endl;
        }
        else{
            cout<<2*k<<endl;
        }
    }
    return 0;
}