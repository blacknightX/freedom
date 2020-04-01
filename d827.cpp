#include <iostream>

using namespace std;

int main()
{
    int n,cost;
    while(cin>>n)
    {
        cost=n/12*50+(n-(n/12)*12)*5;
        cout <<cost;
    }
    return 0;
}
