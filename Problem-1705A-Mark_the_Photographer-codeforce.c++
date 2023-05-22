#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int d=2*n;
        int s[d],count=0;

        for(int i=0; i<d; i++){
            cin>>s[i];
        }
        sort(s,s+d);
        
        for(int i=0; i<n; i++){
            if((s[i+n]-s[i])>=x){
                count++;
            }
        }
        if(count==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}