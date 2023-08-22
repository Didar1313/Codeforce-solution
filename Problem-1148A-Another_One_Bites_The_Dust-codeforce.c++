#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll a,b,c;
    cin>>a>>b>>c;
    a=a+c;
    b=b+c;
    if(a==b){
        cout<<a+b<<endl;
    }
    else if(a>b){
        cout<<2*b+1<<endl;
    }
    else{
        cout<<2*a+1<<endl;
    }
    
    return 0;
}