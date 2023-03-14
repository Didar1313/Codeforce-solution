
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n,count=0;
    cin>>n;
    if(n>26){
        cout<<-1<<endl;
        return 0;
    }
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0; i<n; i++){
        if(s[i]==s[i+1]){
            count++;
        }
    } 
    cout<<count<<endl;
    return 0;
}