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
        int result=0;
        for(int i=0; i<n-1; i++){
            if(s[i+1]<s[i]){
                result=max(result,s[i]);
            }
        }
        cout<<result<<endl;
    }
    return 0;
}