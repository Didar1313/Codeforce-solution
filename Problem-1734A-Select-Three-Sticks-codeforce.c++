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
        int mini=INT_MAX;
        for(int i=1; i<n-1; i++){
            mini=min(((s[i]-s[i-1]) + (s[i+1]-s[i])),mini);
        }
        cout<<mini<<endl;
    }
    return 0;
}