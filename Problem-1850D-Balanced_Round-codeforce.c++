#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int s[n];
        for(int i=0; i<n; i++){
            cin>>s[i];
        }
        sort(s,s+n);
        int count=1,mini=0;
        for(int i=0; i<n-1; i++){
            if((s[i+1]-s[i])<=m){
                count++;
            }
            else{
                mini=max(mini,count);
                count=1;
            }
        }
        int result=max(mini,count);
        cout<<n-result<<endl;
    }
    return 0;
}