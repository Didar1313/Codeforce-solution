#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    for(int i=0; i<t; i++){
        string s;
        ll zero=0,one=0;
        cin>>s;
        for(ll j=0; j<s.size(); j++){
            if(s[j]=='0'){
                zero++;
            }
            else{
                one++;
            }
        }
        if(zero>one){
            cout<<one<<endl;
        }
        if(zero<one){
            cout<<zero<<endl;
        }
        if(zero==one){

            cout<<one-1<<endl;
        }
    }
    return 0;
}