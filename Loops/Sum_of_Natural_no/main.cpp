#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter a no:"<<endl;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        sum+=i;
        cout<<"Sum of natural number is "<<sum;
    }

    return 0;
}
