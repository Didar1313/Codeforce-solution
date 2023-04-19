#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2, s3;
        int count = 0;
        cin >> s1;

        for (int i = 0; i < s1.size()/2; i++)
        {
            s2+=s1[i];
        }
        for (int i = s1.size()/2; i < s1.size(); i++)
        {
            s3+=s1[i];
        }
        if(s2==s3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
