#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        int ds=0;
        ds=(int)s[n-1];
        cout<<ds-96<<endl;
        

    }
    return 0;
}