#include<iostream>

using namespace std;

int & fun (int &a)
{
    cout<<a<<endl;
    return a;
}
int main()
{
    int x=10;
    fun(x);
    cout<<x<<endl;
    return 0;
}
