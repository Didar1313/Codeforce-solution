#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s[n];
        for(int i=1; i<=n; i++){
            cin>>s[i];
        }
        int oddIeven=0,oddIodd=0,evenIeven=0,evenIodd=0,fcount=0,scount=0;
        for(int i=1; i<=n; i+=2){
            if(s[i]%2==0){
                oddIeven++;
            }
            else{
                oddIodd++;
            }
            fcount++;

        }
        for(int i=2; i<=n; i+=2){
            if(s[i]%2==0){
                evenIeven++;
            }
            else{
                evenIodd++;
            }
            scount++;
        }
        if((scount==evenIeven || scount==evenIodd) && (fcount==oddIeven || fcount==oddIodd)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}