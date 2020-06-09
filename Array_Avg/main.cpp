#include <iostream>

using namespace std;

int main()
{
    int A[5], n=5;
    float sum = 0.0, avg;
    for (int i=0;i<n;i++)
    {
        cout<<"Enter a Number";
        cin>>A[i];
    }

    for (int i=0;i<n;i++)
    {

        sum+=A[i];
        avg = sum/n;

    }

    cout<<"The Average of this array is "<<avg;
    return 0;
}
