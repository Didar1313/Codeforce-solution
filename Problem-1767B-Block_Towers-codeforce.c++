#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int s[n];
        for(int i=0; i<n; i++){
            cin>>s[i];
        }
        int sum=s[0];

        for(int i=1; i<n; i++){
            if(sum<s[i]){
                int temp=0;
                sum+=(s[i]-sum+1)/2;

            }
        }
        cout<<sum<<endl;
    }
    return 0;
}