#include<iostream>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len=0,count=0;
        len=s.size();
        set<char>d;
        for(int i=0; i<len; i++){
            d.insert(s[i]);
            if(d.size()>3){
                count++;
                d.clear();
                d.insert(s[i]);
            }
        }
        if(d.size()!=0){
            count++;
        }
        cout<<count<<endl;
    }
}