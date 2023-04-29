#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s[n],count=0;
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    for(int i=0; i<n; i++){
        if(s[i]==0 && (s[i-1]==1 && s[i+1]==1)){
            count++;
            s[i-1]=2;
            s[i+1]=2;
            i++;
        }
    }
    cout<<count<<endl;
    return 0;
}