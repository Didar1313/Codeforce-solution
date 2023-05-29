#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int mini=0,len=s.size();
    char a='a';
    for(int i=0; i<len; i++){
        mini+=min(abs(a-s[i]),26-abs(a-s[i]));
        cout<<mini<<endl;
        a=s[i];
    }
    cout<<mini<<endl;
    
    return 0;
}