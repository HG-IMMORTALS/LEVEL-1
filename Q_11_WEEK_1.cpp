#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m;
    cin>>n>>m;
    double div;
    div=n/m;
    cout<<"floor "<<n<<" / "<<m<<" = "<<floor(div)<<endl;
    cout<<"ceil "<<n<<" / "<<m<<" = "<<ceil(div)<<endl;
    cout<<"round "<<n<<" / "<<m<<" = "<<round(div)<<endl;
}