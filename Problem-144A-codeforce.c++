#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s[n],maxi=0,item=0,mini=101,item2=0;


    for(int i=0; i<n; i++){
        cin>>s[i];
        if(s[i]>maxi){
            maxi=s[i];
            item=i;
        }
        if(s[i]<=mini){
            mini=s[i];
            item2=i;
        }
    }
    if(item>item2){
        item2++;
    }
    cout<<item+(n-1)-item2<<endl;
    return 0;


}