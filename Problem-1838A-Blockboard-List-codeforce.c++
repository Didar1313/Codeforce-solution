#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int rupo[n];
        for(int i=0; i<n; i++){
            cin>>rupo[i];
        }
        sort(rupo,rupo+n);
        if(rupo[0]>=0){
            cout<<rupo[n-1]<<endl;
        }
        else{
            cout<<rupo[0]<<endl;
        }
    }
    return 0;
    
}