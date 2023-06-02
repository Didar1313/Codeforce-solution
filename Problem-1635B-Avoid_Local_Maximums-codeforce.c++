#include<iostream>
#include<algorithm>
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
        s[n]=0;
        int count=0;
        for(int i=1; i<n-1; i++){
            if(s[i]>s[i-1] && s[i]>s[i+1]){
                count++;
                if(s[i+2]>=s[i]){
                    s[i+1]=s[i+2];
                }
                else if(s[i]>s[i+1]){
                    s[i+1]=s[i];
                }

            }
        }
        cout<<count<<endl;
        for(int i=0; i<n; i++){
            cout<<s[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}