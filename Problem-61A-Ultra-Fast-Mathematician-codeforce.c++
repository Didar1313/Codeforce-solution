#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    int count=0;
    cin>>s1>>s2;
    int len=s1.size();
    string d;
    for(int i=0; i<len; i++){
        if(s1[i]==s2[i]){
            d+='0';
        }
        else{
            d+='1';
        }
    }
    cout<<d<<endl;
    return 0;

}