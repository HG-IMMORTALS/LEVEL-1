#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x;
    cin>>x;
    int y=(int)x;
    if(x-y>0) cout<<"float "<<y<<" "<<x-y;
    else cout<<"int "<<x;
}