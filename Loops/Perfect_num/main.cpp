#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter a Number";
    cin>>n;
    for (i=1;i<=n;i++)

        if (n%i==0)
        sum+=i;
        cout<<"Perfect Number"<<endl;
        else
        cout<<"Not Perfect Number";

    return 0;
}
