#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        string s;
        cin>>s;
        for(int i=0; i<n; i++){
            if(s[i]=='+'){
                count++;
            }
            else{
                count--;
            }
        }
        cout<<abs(count)<<endl;
    }
    return 0;
}