#include<iostream>
using namespace std;

// Class = Characteristics + Behaviour

//Charaterstics: Kay lagnar ahe ? --> Data/Variable
//Behaviour: Kay karnar ahe ?    -> Functions/Methods

// Class Defination
class Arithematic
{
public:        //Access Specifier
    int no1;   //Characteristic of class
    int no2;   //Characteristic of class
    
    Arithematic()  //Default Constructor
    {	
        cout<<"Inside Default Constructor\n";
        no1 = 0;
        no2 = 0;
    }
    
    Arithematic(int i, int j)   //parametrised Constructor
    {
        cout<<"Inside parametrised Constructor\n";
        no1 = i;
        no2 = j;
    }
    
    Arithematic(Arithematic &obj)  //Copy Constructor
    {
        cout<<"Inside Copy constructor\n";
        // Nantar Lihu
    }
    
    ~Arithematic()                  //Destructor
    {
        cout<<"Inside Destructor\n";
	// Used to deallocate the resources
    }
    
    int Add()                      //Behaviour of class
    {
        int result = 0;
        result = no1 + no2;
        return result;
    }
    
    int Sub()                     //Behaviour of class
    {
        int result = 0;
        result = no1 - no2;
        return result;
    }
};
int main()
{
    int x = 0, y = 0, ret = 0;
    
    cout<<"Enter first number\n";
    cin>>x;
    cout<<"Enter second number\n";
    cin>>y;
    
    Arithematic obj1(x,y);       // Create object of Arithematic class
    
    ret = obj1.Add();
    cout<<"Addition is : "<<ret<<"\n";
    
    ret = obj1.Sub();
    cout<<"Substraction is : "<<ret<<"\n";
    
    Arithematic obj2;       // Create object of Arithematic class
    
    ret = obj2.Add();
    cout<<"Addition is : "<<ret<<"\n";
    
    ret = obj2.Sub();
    cout<<"Substraction is : "<<ret<<"\n";
    
    return 0;   // Memory for obj1 and obj2 gets deallocate
	// Destructors for obj1 and obj2 gets called
}
