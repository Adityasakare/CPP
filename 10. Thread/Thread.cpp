// Topic : Introducntion to Thread in C++ (C++ 11)

// Thread :
// 1. A thread is the smallest sequence of instructions that managed independently by a scheldular
// 2. A thread is a component of a process.
// 3. Multiple thread can exist within the same process.
// 4. The threads of a process share its intructions (executable code) and its
//	  context (the value of its varibale at any given moment)

// Example :
//			1. Spell checker in the MS Word is a thread you typing at keyboard and
//				same time spell checker cheking the spelling. 
//			2. Intelligence system in Visual Studio

// WAYS TO CREATE THREADS IN C++11
// 1. Function Pointers
// 2. Lambda Functions
// 3. Functions
// 4. Member Functions
// 5. Static mMember Functions

// REQUIREMENT
// Find the addition of all odd numbers from 1 to 1900000000 and all even numbers from 1 to 1900000000

#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
using namespace std;
using namespace std::chrono;
typedef long long int  ull;
 
void findEven(ull start, ull end, ull* EvenSum) {
	for (ull i = start; i <= end; ++i){
		if (!(i & 1)){
			*(EvenSum) += i;
		}
	}
}
 
void findOdd(ull start, ull end, ull* OddSum) {
	for (ull i = start; i <= end; ++i){
		if (i & 1){
			(*OddSum) += i;
		}
	}
}
 
int main() {
 
	ull start = 0, end = 1900000000;
 
	ull OddSum = 0;
	ull EvenSum = 0;
 
    auto startTime = high_resolution_clock::now(); 
 
	// // WITH THREAD
    std::thread t1(findEven, start, end, &(EvenSum));
    std::thread t2(findOdd, start, end, &(OddSum));
 
	t1.join();
	t2.join();
 
	// // WITHOUT THREAD
	// findEven(start,end, &EvenSum);
	// findOdd(start, end, &OddSum);
    auto stopTime = high_resolution_clock::now(); 
    auto duration = duration_cast<microseconds>(stopTime - startTime);
 
	cout << "OddSum : " << OddSum << endl;
	cout << "EvenSum : " << EvenSum << endl;
 
	cout << "Sec: " << duration.count()/1000000 << endl;
 
	return 0;
}
