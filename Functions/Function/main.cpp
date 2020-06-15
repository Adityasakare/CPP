#include <iostream>

using namespace std;
int c;

int add(int a, int b)
{
 c = a+b;
 return c;
}
int main()
{
    add(20 ,5);
    cout<<c<<endl;
    return 0;
}
