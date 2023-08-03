#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s[2*n];
        for(int i=0; i<2*n; i++){
            cin>>s[i];
        }
        sort(s,s+(2*n));
        cout<<s[n]-s[n-1]<<endl;
    }
    return 0;
}
