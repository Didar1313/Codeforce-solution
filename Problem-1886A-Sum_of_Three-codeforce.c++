#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==9 || n<=6){
            cout<<"NO"<<endl;
        }
        else{
            int result=0;
            result=n-3;
            cout<<"YES"<<endl;
            if(result%3==0){
                cout<<1<<" "<<4<<" "<<n-5<<endl;
            }
            else{
                cout<<"1"<<" "<<"2"<<" "<<n-3<<endl;
            }
        }
    }
    return 0;
}