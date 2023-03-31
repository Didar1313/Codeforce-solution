#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        int s;
        for(int j=0; j<n*2; j++){
            cin>>s;
            if(s%2!=0){
                count++;
            }
        }
        if(count==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}