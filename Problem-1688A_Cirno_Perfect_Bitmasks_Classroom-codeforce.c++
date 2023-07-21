#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        bitset<32>x(n);
        bitset<32>y(0);
        for(int i=0; i<32; i++){
            if(x[i]==1){
                y[i]=1;
                break;
            }
        }
        if((x^y)==0){
            for(int i=0; i<32; i++){
                if(x[i]==0 && y[i]==0){
                    y[i]=1;
                    break;
                }
            }
        }
        ll result=y.to_ulong();
        cout<<result<<endl;
    }
    return 0;
}