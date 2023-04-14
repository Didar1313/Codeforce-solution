#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int count=0,sum=0;
        ll n,m;
        cin>>n; 
        if(n<2050 || n%2050){
            cout<<"-1"<<endl;
        }
        else{
            m=n/2050;
            while(m>0){
                sum=m%10;
                count+=sum;
                m/=10;
            }
         cout<<count<<endl;
         count=0;
        }
    }
    return 0;
}