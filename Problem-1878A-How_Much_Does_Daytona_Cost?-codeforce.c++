#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int s,count=0;
        for(int i=0; i<n; i++){
            cin>>s;
            if(s==k){
                count=1;
            }
        }
        if(count==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}