#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x==y){
            cout<<"0"<<endl;
        }
        else{
            if(abs(x-y)%10==0){
                cout<<abs(x-y)/10<<endl;
            }
            else{
                cout<<abs(x-y)/10 +1<<endl;
            }
        }
    }
    return 0;
}