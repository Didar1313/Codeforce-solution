#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==3){
            cout<<"-1"<<endl;
        }else{
        cout<<n<<" "<<n-1<<" ";
        for(int i=1; i<n-1; i++){
            cout<<i<<" ";
        }
        cout<<endl;            
        }

    }
    return 0;
}