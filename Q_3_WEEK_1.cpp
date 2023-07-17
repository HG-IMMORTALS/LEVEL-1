#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=a,y=b,z=c;
    if(a>b) swap(a,b);
    if(b>c)
    {
        swap(c,b);
        if(a>b) swap(a,b);
    }
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
}