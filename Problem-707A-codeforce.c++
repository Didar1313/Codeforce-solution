#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int res=0;
    res=n*m;
    char s;
    for(int i=0; i<res; i++){
        cin>>s;
        if(s!='W' && s!='G' && s!='B'){
            cout<<"#Color"<<endl;
            return 0;
        }
    }

     cout<<"#Black&White"<<endl;

    
    return 0;
}