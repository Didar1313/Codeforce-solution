#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        ll x,y,z,a;
        cin>>x>>y>>z>>a;
        if(a<y){
            cout<<-1<<endl;
            continue ;
        }
    long long s,b;
    b=x+a-y;
    if(b<z){
        cout<<-1<<endl;
        continue ;
    }
    s=(a-y)+abs(b-z);
    cout<<s<<endl;
    }
    return 0;
}