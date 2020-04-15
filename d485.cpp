#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    while(cin>>a>>b)
    {
     c=a%2;
     d=b%2;
     if(c==1)
     a=a+1;
     else
     a=a;
     if(d==1)
     b=b-1;
     else
     b=b;
     cout<<(b-a)/2+1;


    }
    return 0;
}
