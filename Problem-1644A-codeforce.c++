#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int count=0,r=0,g=0,b=0,sum=0;
        cin>>s;
        for(int i=0; i<6; i++){
            if(s[i]=='r'){
                r=1;
            }
            if(s[i]=='g'){
                g=1;
            }
            if(s[i]=='b'){
                b=1;
            }
            if(s[i]=='R' && r!=1){
                sum=1;
            }
            if(s[i]=='G' && g!=1){
                sum=1;
            }
            if(s[i]=='B' && b!=1){
                sum=1;
            }

        }
        if(sum){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}