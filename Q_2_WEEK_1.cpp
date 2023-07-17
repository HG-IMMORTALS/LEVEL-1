#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    int y;
    cin>>x;
    cin>>y;
    if((x%y==0)||(y%x==0)) cout<<"Multiples";
    else cout<<"No Multiples";
}