#include<iostream>
using namespace std;
int main(){
    int t,count=0;
    cin>>t;
    int s[t];
    for(int i=0; i<t; i++){
        cin>>s[i];
    }
    sort(s,s+t);
    for(int i=s[0]; i<=s[t-1]; i++){
        count++;
    }
    int sum=0;
    sum=count-t;
    cout<<sum<<endl;
    return 0;
}