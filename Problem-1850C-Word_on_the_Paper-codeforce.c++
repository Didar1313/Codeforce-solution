#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string d;
        for(int i=0; i<8; i++){
            string s;
            cin>>s;
            for(int j=0; j<8; j++){
                if(s[j] !='.'){
                    d+=s[j];
                }
            }
        }
        cout<<d<<endl;
    }
    return 0;
}