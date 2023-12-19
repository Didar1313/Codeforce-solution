#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string a, b;
        a += s[0];
        bool ok = false;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] != '0' || ok)
            {
                b += s[i];
                ok=true;
            }
            else{
                a+=s[i];
            }
        }
        if(b.size()==0){
            b+='0';
        }
        int c,d;
        c= stoi(a);
        d= stoi(b); //stoi->string to integer
        cout<<c<<" "<<d<<endl;
        if(d>c && d!=0 && c!=0){
            cout<<c<<" "<<d<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}