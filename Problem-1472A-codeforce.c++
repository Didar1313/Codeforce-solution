#include<iostream>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,count=1;
        cin>>a>>b>>c;

        if(c==1){
            cout<<"YES"<<endl;
            continue;
        }
        while(a%2==0){
            count*=2;
            a=a/2;
        }
        while(b%2==0){
            count*=2;
            b=b/2;
        }
        if(count>=c){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}