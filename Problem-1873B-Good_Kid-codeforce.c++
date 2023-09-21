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
        s[0]=s[0]+1;
        int result=1;
        for(int i=0; i<n; i++){
            result*=s[i];
        }
        cout<<result<<endl;
    }
    return 0;
}