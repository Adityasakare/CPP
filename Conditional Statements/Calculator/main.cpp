#include<iostream>
using namespace std;
int main()
{
    int option, a,b,c;
    cout<<"1.Add"<<"2.Minus"<<"5.Mult"<<"4.Div"<<endl;
    cout<<"Enter your option"<<endl;
    cin>>option;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
    switch(option)
    {
        case 1: c=a+b;
        break;

        case 2: c=a-b;
        break;

        case 3: c= a*b;
        break;

        case 4: c=a/b;
        break;

    }
    cout<<"The result is "<<c<<endl;
    return 0;
}
