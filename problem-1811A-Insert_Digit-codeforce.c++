#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,count=0;
        cin>>n>>m;
        string s;
        cin>>s;

        for(int i=0; i<=n; i++){
            if(m>s[i]-'0'){
                s.insert(i,to_string(m));
                break;
            }
        }

        cout<<s<<endl;
    }
}