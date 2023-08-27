#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    string s;
    cin>>s;
 
    for(int i=0; i<n; i+=2){
        if((s[i]=='a' && s[i+1]=='a') || (s[i]=='b' && s[i+1]=='b')){
            s[i]='b';
            s[i+1]='a';
 
            count++;
        }
    }
    cout<<count<<endl;
    cout<<s<<endl;
}