#include <iostream>

using namespace std;

long int x,y;
int a=0;
long int p=1;
int b;

int main()
{
    cout<<"input:  "<<endl;
    cin>>x;
    y=x;
    while (x!=0)
    {
        a=a+1;
        x=x/10;
    }
    for (int i=1;i<a;i++)
    {
        p=p*10;
    }
    while (y!=0)
    {
        b=y/p;
        y=y%p;
        p=p/10;
        cout<<b<<endl;
    }

    return 0;
}
