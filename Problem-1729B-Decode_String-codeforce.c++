#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char> m;
        string s,d;
        cin>>s;
        
        for(int i=n-1; i>=0; i--){
            if(s[i]=='0'){
                int a=s[i-1]-48;
                int b=s[i-2]-48;
                int y=b*10 +a;
                char c=y+96;
                m.push_back(c);
                i=i-2;
            }
            else{
                int x=s[i]-48;
                char c=x+96;
                m.push_back(c);
            }
        }
        reverse(m.begin(),m.end());
        for(int i=0; i<m.size(); i++){
            cout<<m[i]<<"";
        }
        cout<<endl;
    }
    return 0;
}