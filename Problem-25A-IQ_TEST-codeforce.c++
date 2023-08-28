#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s[n],even=0,odd=0,resulte=0,resulto=0;
    for(int i=0; i<n; i++){
        cin>>s[i];
        if(s[i]%2==0){
            even++;
            resulte=s[i];
            if(even>=2){
                resulte=0;
            }
        }
        else{
            odd++;
            resulto=s[i];
            if(odd>=2){
                resulto=0;
            }
        }
    }
    cout<<max(resulte,resulto)<<endl;
    return 0;
}