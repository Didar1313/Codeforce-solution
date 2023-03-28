#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0,l;
        cin>>n;
        int s[n];
        for(int j=0; j<n; j++){
            cin>>s[j];
        }
        sort(s,s+n);
        bool flag=0;
        for(int i=0; i<n-2; i++){
            if(s[i]==s[i+2]){
                cout<<s[i]<<endl;
                flag=1;
                break;
            }

        }
        if(flag==0){
            cout<<"-1"<<endl;
        }
        
    }
    return 0;
}