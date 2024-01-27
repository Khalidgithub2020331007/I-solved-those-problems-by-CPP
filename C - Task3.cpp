#include<bits/stdc++.h>
using namespace std;
bool is_substring(const string & substring,const string & mainstring)
{
    return mainstring.find(substring)!=string::npos;
}
bool compare_strings_by_length(const string& s1, const string& s2) {
  return s1.length() < s2.length();
}

int main()
{
    int t;
    cin>>t;
    set<string>mys;
    vector<string>v;
    while(t--)
    {
        string s;
        cin>>s;
        mys.insert(s);
        v.push_back(s);


    }
    int len=0;
    string s="";
    for(auto & a:mys)
    {
        if (len<a.length())
        {
            s=a;
            len=a.length();
        }
//        cout<<a<<" "<<a.length()<<endl;
    }
    bool d=true;
     sort(v.begin(), v.end(), compare_strings_by_length);


    for (int i=0;i<v.size()-1;i++)

    {

        if (is_substring(v[i],v[i+1])==false)
        {
            d=false;
            break;
        }

    }
    if (d)
    {
        cout<<"YES"<<endl;

        for(auto & element:v)
            cout<<element<<endl;


    }
    else cout<<"NO"<<endl;



}
