#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c,area;
    double s;
    while(cin>>a>>b>>c)
    {
      s=(a+b+c)/2;
      area=(s*(s-a)*(s-b)*(s-c));
      cout <<area;
    }
    return 0;
}
