#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,count=0,maxi=0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a==1){
                count=0;
            }
            else{
                count++;
                maxi=max(maxi,count);
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}