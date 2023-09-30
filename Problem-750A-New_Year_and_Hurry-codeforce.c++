#include<iostream> 
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int result[n+1];
    result[1]=5;
    for(int i=2; i<=n; i++){
        result[i]=result[i-1]+i*5;
    }
    int count=0;
    for(int i=n; i>=1; i--){
        if(result[i]+k<=240){
            cout<<i<<endl;
            count=1;
            break;
        }
    }
    if(count==0){
        cout<<"0"<<endl;
    }
    return 0;
}