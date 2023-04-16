#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s[n];
    for(int i=0; i<n; i++){
        cin>>s[i];
    }

    int count=0,d[n],j=0,sum=0,last=0;

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(s[i]==s[j]){
                s[i]=0;
                sum++;
            }
        }
    }
    last=n-sum;
    cout<<last<<endl;
    for(int i=0; i<n; i++){
        if(s[i]>0){
            cout<<s[i]<<" ";
    }

    }
    cout<<endl;

    return 0;
}