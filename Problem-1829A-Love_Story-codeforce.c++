#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string d,s;
        d="codeforces";
        int count=0;
        cin>>s;
        for(int i=0; i<s.length(); i++){
            if(s[i]!=d[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
