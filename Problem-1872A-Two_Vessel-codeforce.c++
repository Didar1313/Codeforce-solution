#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        c=2*c;
        int d=max(a,b)-min(a,b);
        int result=(d+c-1)/c;
        cout<<result<<endl;
    }
    return 0;
}