#include<iostream>
using namespace std;
int divisor(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return i;
        }
    }
    return n;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(b<=3){
            cout<<"-1"<<endl;
        }
        else if(b%2!=0 && b-a>=1){
            b=b-1;
            cout<<b/2<<" "<<b/2<<endl;
        }
        else{
            if(divisor(b)==b){
                cout<<"-1"<<endl;
            }
            else{
                cout<<divisor(b)<<" "<<b-divisor(b)<<endl;
            }
            
        }
    }
    return 0;
}
