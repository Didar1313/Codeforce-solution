#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll x,y,z;
        cin>>x>>y>>z;
        if(x>y){
            swap(x,y);
        }
        if(x>z){
            swap(x,z);
        }
        if(y>z){
            swap(y,z);
        }
        if(y==z){
            cout<<"YES"<<endl;
            cout<<x<<" "<<x<<" "<<z<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}