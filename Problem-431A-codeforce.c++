#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    int sum=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1'){
            sum+=a;
        }
        if(s[i]=='2'){
            sum+=b;
        }
        if(s[i]=='3'){
            sum+=c;
        }
        if(s[i]=='4'){
            sum+=d;
        }
    }
    cout<<sum<<endl;
    return 0;
}