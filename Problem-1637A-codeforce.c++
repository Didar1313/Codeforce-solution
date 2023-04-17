#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s[n],max=0,count=0;
        for(int i=0; i<n; i++){
            cin>>s[i];
            if(max<=s[i]){
                count++;
                max=s[i];
            }
        }
        if(count==n){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}