#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,s=0;
        cin>>n;
        for(int j=1; j<10; j++){
            for(int k=j; k<=n;){
                s++;
                k=(k*10)+j;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}