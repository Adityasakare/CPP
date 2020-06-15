#include<iostream>
using namespace std;

int Max(int a,int b,int c)
{
    if(a>b && a>c)
        return a;
    else if (b>c)
        return b;
    else
        return c;
}
int main()
{
    int r,a,b,c;
    cout<<"Enter 3 Numbers:";
    cin>>a>>b>>c;

    r=Max(a,b,c);

    cout<<r<<endl;
    return 0;
}
