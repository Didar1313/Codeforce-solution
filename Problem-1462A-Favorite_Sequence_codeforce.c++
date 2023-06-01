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
        int l=n-1,m=0;
        int maxsize=INT_MAX;
        int a[n];
        for(int i=0; i<n; i++){
            a[m]=s[i];
            a[m+1]=s[l];
            m+=2;
            l--;
        }
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}