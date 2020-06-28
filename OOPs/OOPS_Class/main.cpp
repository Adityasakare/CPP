#include<iostream>
using namespace std;

class Rectangle
{
  public:

    int lengh;
    int breadth;

  int area()
  {
    return lengh*breadth;
  }

  int perimeter()
  {
    return 2*(lengh+breadth);
  }
};


int main()
{
    Rectangle r1;
    r1.lengh = 10;
    r1.breadth = 15;
    cout<<r1.area()<<endl;
    return 0;
}
