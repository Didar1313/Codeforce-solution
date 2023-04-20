#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s[3],sum=0;
        cin>>s[0]>>s[1]>>s[2];
        sort(s,s+3);
        
            if((s[0]+s[1])==s[2]){
                cout<<"YES"<<endl;
            }
            else if((s[0] == s[1]) && s[2]%2==0){
                cout<<"YES"<<endl;
            }
            else if((s[1] == s[2]) && s[0]%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    
    return 0;
}