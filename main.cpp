#include <iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    long long a , b ;
    cin >> a >> b;
    long long res = a-b;
    if(res>=0)
    {
        cout<<res<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;
}
