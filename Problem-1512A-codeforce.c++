#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s[n];
        for(int i=1; i<=n; i++){
            cin>>s[i];
        }

        for(int i=1; i<=n; i++){
            if((s[i]!=s[i+1]) && (s[i]==s[i+2]) ){
                cout<<i+1<<endl;
                break;
            }
            else if((s[i]==s[i+1]) && (s[i+1]!=s[i+2])){
                cout<<i+2<<endl;
                break;
            }
            else if(s[i]!=s[i+1] && s[i+1]==s[i+2]){
                cout<<i<<endl;
                break;
            }
            
        }
    }
    return 0;
}