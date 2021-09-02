// Threading 

#include <iostream>
#include <thread>
using namespace std;
void EvenAddition(int iStart, int iEnd, int* EvenSum)
{
	for (int i = iStart; i <= iEnd; ++i)
	{
		if ((i % 2) == 0)
		{
			(*EvenSum) = (*EvenSum) + i;
		}
	}
}

void OddAddition(int iStart, int iEnd, int* OddSum)
{
	for (int i = iStart; i <= iEnd; ++i)
	{
		if ((i % 2) != 0)
		{
			(*OddSum) = (*OddSum) + i;
		}
	}
}


int main()
{
	int start = 0, end = 100000; 
	int EvenSum = 0, OddSum = 0;

	std::thread t1(EvenAddition, start, end, &EvenSum);
	std::thread t2(OddAddition, start, end, &OddSum);

	t1.join();
	t2.join();
	cout << "Even Sum is "<<EvenSum<<endl;
	cout << "Odd Sum is "<<OddSum<<endl;

	return 0;
}