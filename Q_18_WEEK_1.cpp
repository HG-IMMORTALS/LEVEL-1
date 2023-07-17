#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,res;
    char op;
    cin>>a>>op>>b;
    if(op=='+') cout<<a+b;
    else if(op=='-') cout<<a-b;
    else if(op=='*') 
    {  
        res=a*b;
        cout<<res;
    }
    else
    {
        cout<<a/b;
    }
}










