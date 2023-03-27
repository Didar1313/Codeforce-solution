#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    for(int i=0; i<t; i++){
        ll a,b,c,d,avg=0,sum=0;
        cin>>a>>b>>c>>d;
        if((a+b+c+d)%3==0){
            avg=(a+b+c+d)/3;
            if((a<=avg && b<=avg)&& c<=avg){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}