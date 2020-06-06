#include<iostream>
using namespace std;
int main()
{
    int A[]={4,2,5,9,6,8,3,18};
    int Max,n=8;
    Max=A[0];
    for (int i=0;i<n;i++)
    {
        if(A[i]>Max)
            Max=A[i];
    }
    cout<<"The Maximum Number in the array is"<<Max<<endl;
    return 0;
}
