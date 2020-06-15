#include <iostream>

using namespace std;

template<class T >

T maximum(T x,T y)
{
    return x>y?x:y;
}

int main()
{
   cout<<maximum(10,20)<<endl;
   cout<<maximum(12.5,10.5)<<endl;
    return 0;
}
