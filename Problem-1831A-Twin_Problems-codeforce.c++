#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int l=n+1;

        int s[n];
        for(int i=0; i<n; i++){
            cin>>s[i];
        }

        for(int i=0; i<n; i++){
            cout<<l-s[i]<<" ";
        }
        cout<<endl;
        }
        return 0;

}