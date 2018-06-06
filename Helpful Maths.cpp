#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long int i,j,len;
    len=s.length();
    for(i=0;i<len;i+=2)
    {
        for(j=0;j<len-2;j+=2)
        {
            if(s[i]<s[j])
                swap(s[i],s[j]);
        }
    }
    cout<<s;


}
