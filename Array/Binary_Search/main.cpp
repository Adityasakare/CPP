#include<iostream>
using namespace std;
int main()
{
    int i,L=0,H=9,key,mid;
    int A[10]={2,4,6,8,10,20,30,40,50,60};
    cout<<"Enter a key:"<<endl;
    cin>>key;
    while(L<=H)
    {
        mid = (L+H)/2;
        if(key==A[mid])
        {
            cout<<"Key found at "<<mid;
            exit(0);
        }
        else if (key<A[mid])
            H =mid-1;
        else
            L=mid+1;
    }
    cout<<"Not found";
    return 0;

}
