#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s[n];
        for(int i=0; i<n; i++){
            cin>>s[i];
        }
        sort(s,s+n);
        int count=0;
        for(int i=0; i<n-1; i++){
            if((s[i+1]-s[i])<=1){
                count++;
            }
        }
        if((n-count)==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}