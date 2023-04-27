#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,d,r;
        cin>>s;
        d=(s[0]-1);
        int sum=0,len=0;
        len=s.size();
        for(int i=1; i<=len; i++){
            sum+=i;
        }

        cout<<((d[0]*10)-480)+sum<<endl;

    }
    return 0;
}