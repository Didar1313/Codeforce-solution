#include<iostream>
using namespace std;
int main(){
    int t,count=0;
    cin>>t;
    string s;
    cin>>s;
    for(int i=2; i<t; i++){
        if(s[i-2]=='x' && s[i-1]=='x' && s[i]=='x'){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}