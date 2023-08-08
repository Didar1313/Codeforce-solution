#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s[n],even=0,odd=0;
        for(int i=0; i<n; i++){
            cin>>s[i];
            if(s[i]%2!=0){
                odd+=s[i];
            }
            else{
                even+=s[i];
            }
        }
        if((even%2==0 && odd%2==0) || (even%2!=0 && odd%2!=0)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}