#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n >= 0 && n <= 100)
    {
        if (n >= 0 && n <= 35)
        {
            cout << "F" << endl;
        }
        else if (n >= 35 && n <= 50)
        {
            cout << "E" << endl;
        }
        else if (n >= 50 && n <= 60)
        {
            cout << "C" << endl;
        }
        else if (n >= 70 && n <= 85)
        {
            cout << "B" << endl;
        }
        else
        {
            cout << "A" << endl;
        }
    }
    else
    {
        cout << "INVALID CHOICE" << endl;
    }
    return 0;
}