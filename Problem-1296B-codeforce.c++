#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        ll x,sum=0;
        cin>>x;
        sum=x+(x-1)/9;
        cout<<sum<<endl;
    }
    return 0;
}