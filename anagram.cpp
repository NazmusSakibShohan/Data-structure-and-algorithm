#include <iostream>
using namespace std;
bool isanagram(string s,string t)
{
    if(s.length()!=t.length())
    {
       return false;
    }

    int count[26]={0};
    for(int i=0;i<s.length();i++)
    {
        count[s[i]-'a']++;
        count[t[i]-'a']--;
    }
    for(int x:count)
    {
        if(x!=0)
        {
          return false;
        }
    }
         return true;
}
int main()
{
    string s,t;
    cin>>s>>t;
    if(isanagram(s,t))
    cout<<"valid";
    else
    cout<<"invalid";

    return 0;
}
