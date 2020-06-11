#include <iostream>

using namespace std;

int main()
{
    int x=10;
//    int &y =x;
//    cout<<y<<endl;
//    x++;
//    y++;
//    cout<<x<<endl;
//    cout<<&x<<" "<<&y<<endl;
    int a;
    a=x;
    x =25;
    cout<<a<<endl;
    cout<<x<<endl;
    return 0;
}
