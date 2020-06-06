#include<iostream>
using namespace std;
int main()
{
    int i;
    int A[]={5,4,2,4,6,8,10};
    float B[] = {2.2f,5.6f,6.9};
//    for(i=0;i<6;i++)
//    {
//        cout<<A[i]<<endl;
//    }
//  ANOTHER METHOD
    for(auto x:B)
        cout<<x<<endl;
    return 0;
}
