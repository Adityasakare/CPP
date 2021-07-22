#include <iostream>

using namespace std;

// If class Conatins static characteristics it is has to be define outside the class
// We can call static member function without creating object of class
// Using object we can call static as well as non static

class Demo
{
    public :
        int i;              // Non static charactertics (Insatnce / Object Variable)
        int j;              //Non static  charactertics (Instance Variable)      
        static int k;       // Static characteritics    (Class Variable)

        Demo()
        {
            i = 10;
            j = 20;
           // k = 30;
        }

        // Non Staic Behaviour / Function can access non static as well as static characterstics 
        void fun()                          // Non static Behaviour
        {
            cout << "Inside Fun ";
            cout << "Non Staic charactertic i and j are " <<i << "\t"<< j <<endl;                   // Allowed
            cout << "Staic charactertic k is " << k << "\n";// Allowed
        }

        void sum()
        {
            cout << "Using this pointer i and j values "<<endl;
            cout << this -> i <<endl;
            cout << this -> j <<endl;
        }

        // Static Behaviour can access ONLY Static charactertics
        static void gun()                   // Static Behaviour
        {
            cout << "Inside Gun\n";
           // cout << i << "\t"<< j <<endl; // Not Allowed
            cout << k << "\n";              // Allowed

        } 
};

int Demo::k = 30;

int main()
{
    Demo::gun();
    cout << "Value of k is " << Demo::k <<endl;

    Demo obj1;
    Demo obj2;

    cout << "Inside Main\n";
    cout << "Size of object is " << sizeof(obj1) << endl;

    obj1.fun();
    obj1.gun();

//  Since Static charatcerics doesnt get store in object it is comman for all object anyone can access it of its class and change it.
// example
    Demo :: k = 40;
    cout << "Using obj1 k is "<<obj1.k <<endl;
    cout << "Using obj2 k is "<<obj2.k <<endl;

    obj1.sum();

    return 0;
}
