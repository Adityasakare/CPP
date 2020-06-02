#include<iostream>
using namespace std;
int main()
{
    float Basic_salary;
    float Per_Allow;
    float per_Dedc;
    float Net_salary;
    cout<<"Enter the Basic Salary: ";
    cin>>Basic_salary;
    cout<<"Enter the Percentage of Allowance: ";
    cin>>Per_Allow;
    cout<<"Enter the Percentage of Deductions: ";
    cin>>per_Dedc;
    Net_salary = Basic_salary + Basic_salary*Per_Allow/100 - Basic_salary*per_Dedc/100;
    cout<<"The Net salary is:"<<Net_salary<<endl;
    return 0;


}
