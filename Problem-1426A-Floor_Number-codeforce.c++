#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){   
        int a,b,count=1;
        cin>>a>>b;
        for(int i=3; i<=a; i+=b){
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}