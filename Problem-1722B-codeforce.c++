#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        for(int j=0; j<n; j++){
            if(s1[j]!=s2[j]){
                if((s1[j]=='B' && s2[j]=='G') || (s2[j]=='B' && s1[j]=='G')){
                    s1[j]='B';
                    s2[j]='B';
                }
            }
    }
    if(s1==s2){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}