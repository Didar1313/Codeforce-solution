#include<iostream>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<string>count;
        for(int i=0; i<n-1; i++){
            string temp;
            temp.push_back(s[i]);
            temp.push_back(s[i+1]);
            count.insert(temp);
        }
        cout<<count.size()<<endl;
    }
    return 0;
}