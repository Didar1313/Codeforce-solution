#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=1,maxfreq=0;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>freq;
        for(int i=0; i<n; i++){
            freq[s[i]]++;
            maxfreq=max(maxfreq,freq[s[i]]);
        }
        if(maxfreq*2>n){
            cout<<maxfreq+maxfreq-n<<endl;
        }
        else{
            cout<<(n%2)<<endl;
        }
    }
    return 0;
}