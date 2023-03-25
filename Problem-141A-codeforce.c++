#include<iostream>
using namespace std;
int main(){

    string a,b,c;
    cin>>a>>b>>c;
    string s=a+b;
    sort(c.begin(),c.end());
    sort(s.begin(),s.end());
    if(c==s){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;

}
