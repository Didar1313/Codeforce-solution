#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,mini=0,maxi=0;
        cin>>a>>b>>c;
        cout<<max(0,max(b,c)-a+1)<<" "<<max(0,max(a,c)-b+1)<<" " <<max(0,max(b,a)-c+1)<<endl;
    }
    return 0;
}