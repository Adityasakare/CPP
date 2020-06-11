#include<iostream>
using namespace std;
int main()
{
    int x=50;
    int *p=&x;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    return 0;
}
