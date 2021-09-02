// Ways to create Threads
//1. Using Non Static Member Function
#include <iostream>
#include <thread>

using namespace std;

class Math
{
public:
	void Add(int iNo1, int iNo2, int *iAns)
	{
		*iAns = iNo1 + iNo2;
	}
	void Sub(int iNo1, int iNo2, int *iAns)
	{
		*iAns = iNo1 - iNo2;
	}

	void Div(int iNo1, int iNo2, int *iAns)
	{
		*iAns = iNo1 / iNo2;
	}

	void Mult(int iNo1, int iNo2, int *iAns)
	{
		*iAns = iNo1 * iNo2;
	}
}; 

int main()
{
	Math mobj;
	int iValue1 = 0, iValue2 = 0, iAdd = 0, iSub = 0, iDiv = 0, iMult = 0;
	cout << "Enter number 1 " << endl;
	cin >> iValue1;
	cout << "Enter number 2 " << endl;
	cin >> iValue2;

	std::thread t1(Math::Add, mobj, iValue1, iValue2, &iAdd);
	std::thread t2(&Math::Sub,&mobj, iValue1, iValue2, &iSub);
	std::thread t3(&Math::Div,&mobj, iValue1, iValue2, &iDiv);
	std::thread t4(&Math::Mult,&mobj, iValue1, iValue2, &iMult);
	t1.join();
	t2.join();
	t3.join();
	t4.join();

	cout << "Addition is " << iAdd << endl;
	cout << "Subtraction is " << iSub << endl;
	cout << "Division is " << iDiv << endl;
	cout << "Multiplication is " << iMult << endl;
	return 0;
} 
