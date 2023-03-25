#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,count=0;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        if(n==1){
            cout<<"2"<<endl;
        }
        else{
         for(int j=1; j<n; j++){
            if(s[j-1]==s[j]){
                count++;
            }
         }
         int result=0;
         result=(n-count);
         int res=0;
         res=result*2;
         cout<<res+count<<endl;
        }

    }
    return 0;
}
