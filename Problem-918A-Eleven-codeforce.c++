#include<iostream>
using namespace std;
int main(){
    int n,f1=1,f2=1,f3=1;;
    cin>>n;
    int s[n];
    for(int i=1; i<=n; i++){
        if(i==f3){
            cout<<"O";
            f3=f1+f2;
            f1=f2;
            f2=f3;
        }
        else{
            cout<<"o";
        }
    }
    cout<<endl;
    return 0;
}