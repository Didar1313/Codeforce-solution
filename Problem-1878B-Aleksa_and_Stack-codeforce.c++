#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=1;
        cin>>n;
        while(n--){
            cout<<count<<" ";
            count+=2;
        }
        cout<<endl;
    }
    return 0;
}