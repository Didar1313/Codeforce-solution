#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n,count=0;
    n=s.size();
    for(int i=0; i<n; i++){
        if(s[i]=='a'){
            count++;
        }
    }
    if((n/2)<count){
        cout<<n<<endl;
    }
   
    else{
        cout<<(count+(count-1))<<endl;
    }
    return 0;
}
