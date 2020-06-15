#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}

int add(int a,int b,int c)
{
    return a+b+c;
}
float add (float a, float b)
{
    return a+b;
}

int main()
{
    int a,b,c,k,d,j;
    d=add(5,5);
    cout<<"First Function"<<d<<endl;
    k=add(10,5,5);
    cout<<"Second Function"<<k<<endl;
    j=add(9.5f,19.5f);
    cout<<"Third Function"<<j<<endl;
    return 0;
}
