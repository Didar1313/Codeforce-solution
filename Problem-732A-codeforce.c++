#include<iostream>
using namespace std;
int main(){
    int n,t,res=0;;
    cin>>n>>t;
    for(int i=1; i<=9; i++){
        if(((n*i)%10==t) || (n*i)%10==0){
            res=i;
            break;
        }
    }
    cout<<res<<endl;
    return 0;
}