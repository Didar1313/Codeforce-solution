#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a=0,b=0;
        cin>>n;
        a=n/2020;
        b=n%2020;
        if(a>=b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}