#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int s[n];
        int max=0,count=0,sum=0;
        for(int j=0;j<n; j++){
            cin>>s[j];
            if(s[j]%2==0){
                count+=s[j];
            }
            else{
                sum+=s[j];
            }
        }
        if(count>sum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}