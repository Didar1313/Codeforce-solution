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
        for(int i=n-1; i>=0; i--){
            cout<<s[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}