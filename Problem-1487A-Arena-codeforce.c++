#include<iostream>
#include<set>
#include<vector>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0,s[n],mini=0;
        cin>>s[0];
        mini=s[0];
        for(int i=1; i<n; i++){
            cin>>s[i];
            if(mini>s[i]){
                mini=s[i];
            }
        }
        for(int i=0; i<n; i++){
            if(mini!=s[i]){
                count++;
            }
        }
        cout<<count<<endl;
    
    }
    return 0; 
}