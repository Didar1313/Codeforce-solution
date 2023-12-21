#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int one=0,zero=0;
        cin>>s;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='1'){
                one++;
            }
            else{
                zero++;
            }
        }
        for(int i=0; i<s.length(); i++){
            if(s[i]=='1' && zero>0){
                zero--;
            }
            else if(s[i]=='0' && one>0){
                one--;
            }
            else{
                break;
            }
        }
        cout<<zero+one<<endl;
    }
    return 0;
}