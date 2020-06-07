#include<iostream>
using namespace std;
int main()
{
    int i,n=10,key;
    int A[10]={10,20,30,40,50,60,80,99};

    cout<<"Enter the Key: "<<endl;
    cin>>key;
    for (i=0;i<n;i++)
    {
        if(key==A[i])
        {
            cout<<"Suceesfully key fount at"<<i;
            exit(0);
        }

    }
        cout<<"Not Found";
        return 0;
}
