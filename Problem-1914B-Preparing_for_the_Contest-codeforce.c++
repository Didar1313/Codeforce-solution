#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        int temp1=m-n;
        int temp2=(m-n);
        if(n>0){
            n=n+1;
        }
        for(int i=1; i<=m; i++){
            if(n!=0){
                cout<<temp1<<" ";
                temp1++;
                n--;
                if(n==0){
                    temp2--;
                }
            }
            else{
                cout<<temp2<<" ";
                temp2--;
            }
        }
        cout<<endl;
    }
    return 0;
}