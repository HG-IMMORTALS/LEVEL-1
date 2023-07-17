#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    char s,r;
    cin>>a>>s>>b>>r>>c;
    if(s=='+') d=a+b;
    else if(s=='-') d=a-b;
    else if(s=='*') d=a*b;
    if(c==d) cout<<"Yes";
    else cout<<d;
}