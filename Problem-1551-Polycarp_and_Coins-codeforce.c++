#include<iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll result=0;
        result=n/3;
        if(n==1){
            cout<<1<<" "<<"0"<<endl;
        }
        else if(n==2){
            cout<<"0"<<" "<<"1"<<endl;
        }
        else if(n%3!=0 && (n-((2*result)+result))>1){
            cout<<n/3<<" "<<n/3 +1<<endl;
        }
        else if(n%3!=0 && (n-((2*result)+result))==1){
            cout<<n/3 +1<<" "<<n/3<<endl;
        }
        else{
            cout<<n/3<<" "<<n/3<<endl;
        }
    }
    return 0;
}