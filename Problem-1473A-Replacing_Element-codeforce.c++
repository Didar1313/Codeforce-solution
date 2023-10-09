#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int s[n];
        for(int i=0; i<n; i++){
            cin>>s[i];
        }
        sort(s,s+n);

        if(s[0]+s[1]<=k || s[n-1]<=k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}