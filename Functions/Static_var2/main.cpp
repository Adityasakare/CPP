#include<iostream>

using namespace std;

void fun()
{
    static int v = 5;
    v++;
    cout<<v<<endl;
}

int main()
{
    fun ();
    fun ();
    return 0;
}
