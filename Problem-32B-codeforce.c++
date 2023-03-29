#include<iostream>
using namespace std;
int main(){
    string s,sum;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='.'){
            sum+='0'; 
        }
        if(s[i]=='-' && s[i+1]=='.'){
            sum+='1';
            ++i;
        }
        if(s[i]=='-' && s[i+1]=='-'){
            sum+='2';
            ++i;
        }
    }
    cout<<sum<<endl;
    return 0;
}