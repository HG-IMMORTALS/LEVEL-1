#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    a%=100;
    b%=100;
    c%=100;
    d%=100;
    int m=(a*b*c*d)%100;
    if(m<10) cout<<0<<m;
    else cout<<m;
}