#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int count=0,len=s.size(),nt=0;
        
        for(int i=0; i<len; i++){
            if(s[i]=='B'){
                count++;
            }
            else{
                nt++;
            }
        }
        if(count==nt){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}