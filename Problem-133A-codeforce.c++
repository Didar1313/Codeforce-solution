#include<iostream>
using namespace std;
int main(){
    string d;
    cin>>d;
    if(d.find("H")!=-1 || d.find("Q")!=-1 || d.find("9")!=-1){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}