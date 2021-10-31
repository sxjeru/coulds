#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,r;
    char t;
    getline(cin,s);
    for (int i=0;(unsigned)i<=s.length();i++){
        t=s[i];
        if (t=='z' || t=='Z')   t=(char)((int)t-25);
        else if (t>='A' && t<='Z' || t>='a' && t<='z')  t=(char)((int)t+1);
        if (t>='A' && t<='Z')   t=(char)((int)t+32);
        else if (t>='a' && t<='z')  t=(char)((int)t-32);
        r=r+t;
    }
    cout<<r<<endl;
    return 0;
}
