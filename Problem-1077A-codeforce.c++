#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,c,sum=0,d=0;
        cin>>a>>b>>c;
        if(c%2!=0){
            d=(c-1)/2;
            sum=(a*(d+1))-(d*b);
            cout<<sum<<endl;
        }
        else{
            d=c/2;
            sum=(a*d)-(b*d);
            cout<<sum<<endl;
        }
    }
    return 0;
}