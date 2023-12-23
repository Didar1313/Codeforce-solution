#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>count;
        for(int i=0; i<n; i++){
            count[s[i]]++;
        }
        int cnt=0;
        for(auto m:count){
            if(m.second>=m.first-'A'+1){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}