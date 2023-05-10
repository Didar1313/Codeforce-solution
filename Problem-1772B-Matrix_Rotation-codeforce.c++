#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a<b && a<c && c<d && b<d) || (c<a && c<d && a<b && d<b) || (d<c && d<b && c<a && b<a) || (b<d && b<a && d<c && a<c)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        
        }
    }
    return 0;
}