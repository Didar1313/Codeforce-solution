#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int> >s(n);
        for(int i=0; i<n; i++){
            cin>>s[i].first;
            s[i].second=i;
        }
        sort(s.begin(),s.end());
        vector<int>d(n);
        for(int i=0; i<n; i++){
            cin>>d[i];
        }
        sort(d.begin(),d.end());
        vector<int>result(n);
        

        for(int i=0; i<n; i++){
            result[s[i].second]=d[i];
            
        }
        for(int i=0; i<n; i++){
            cout<<result[i]<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}