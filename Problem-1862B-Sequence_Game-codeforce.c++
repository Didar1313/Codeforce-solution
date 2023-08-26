#include<iostream>
#include<climits>
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
        vector<int>result;
        result.push_back(s[0]);
        for(int i=1; i<n; i++){
            if((s[i])>=result.back()){
                result.push_back(s[i]);
            }
            else{
                result.push_back(1);
                result.push_back(s[i]);
            }
        }
        cout<<result.size()<<endl;
        for(int i=0; i<result.size(); i++){
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }
}
