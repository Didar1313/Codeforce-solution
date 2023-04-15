#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int best,worst,count=0;
    cin>>best;
    worst=best;
    while(--n){
        int a;
        cin>>a;
        if(a<worst){
    
            worst=a;
            count++;
        }
        if(a>best){
            best=a;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}