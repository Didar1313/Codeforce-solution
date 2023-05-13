#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b,c=24,d=60,h,m;
    cin>>a>>b;
    if(d-b>0){
        m=d-b;
        a++;
        h=(c-a)*60;
        cout<<h+m<<endl;
    }
    else{
        h=(c-a)*60;
        cout<<h<<endl;
    }
    }
    return 0;
}