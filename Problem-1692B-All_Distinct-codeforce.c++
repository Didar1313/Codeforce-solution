#include<iostream>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>s;

        int value;
        for(int i=0; i<n; i++){
            cin>>value;
            s.insert(value);
        }
        int size=s.size();
        int sub=n-size;
        if(sub%2!=0){
            cout<<size-1<<endl;
        }
        else{
            cout<<size<<endl;
        }
    }
    return 0;
}