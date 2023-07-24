#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>s(n);
        for(int i=0; i<n; i++){
            cin>>s[i];
        }
        reverse(s.begin(),s.end());
        while(!s.empty() && s.back()==0){
            s.pop_back();
        }
        if(s.empty()){
            cout<<"0"<<endl;
            continue;
        }
        reverse(s.begin(),s.end());
        int size=s.size();
        int result=0;
        for(int i=0; i<size-1; i++){
            if(s[i]==0){
                result+=1;
            }
            else{
                result+=s[i];
            }
        }
        cout<<result<<endl;
    }
    return 0;
}