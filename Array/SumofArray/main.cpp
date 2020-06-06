#include<iostream>
using namespace std;
int main()
{
    int A[]={4,8,12,16,20,24,28};
    int n=7,sum=0;
    for (int i=0;i<n;i++)
    {
        sum+=A[i];
    }
    cout<<sum<<endl;
    return 0;
}
