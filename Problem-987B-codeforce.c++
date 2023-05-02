#include<iostream>
#include<cmath>
long double x,y;
#define fastread();
using namespace std;
typedef long long ll;
int main(){
    fastread();
    ll n,m;
    cin>>n>>m;
    x= m*log(n);
    y=n*log(m);
    if(x>y){
        cout<<">"<<endl;
    }
    else if(x<y){
        cout<<"<"<<endl;
    }
    else if(x==y){
        cout<<"="<<endl;
    }
    return 0;
}