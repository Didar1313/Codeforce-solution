#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s[n],result=0;
        int i=0;
        for(i=0; i<n; i++){
            cin>>s[i];
            result+=s[i];
        }
        if(result<0 || i>result){
            cout<<1<<endl;
        }
        else{
            cout<<result-i<<endl;
        }
    }
    return 0;
}