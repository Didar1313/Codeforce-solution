#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    for(int i=0; i<10001; i++){
        s+=to_string(i);
    }
    cout<<s[n]<<endl;
    return 0;
}