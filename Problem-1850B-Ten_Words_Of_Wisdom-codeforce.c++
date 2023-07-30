#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int count=0,result=0,x,y,n;
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>x>>y;

            if(x<10 && y>result){
                result=y;
                count=i;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}