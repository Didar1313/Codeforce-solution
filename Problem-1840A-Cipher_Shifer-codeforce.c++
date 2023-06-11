#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n; 
        string d;
        cin>>d;
        vector<int>s;
        char c=s[0];
        for(int i=0; i<n; i++){
            if(c==d[i]){
                s.push_back(c);
                c=d[i+1];
                i++;
            }
        }
        for(auto j: s){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}