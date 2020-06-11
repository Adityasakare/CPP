#include <iostream>

using namespace std;

int main()
{
    int size;

    // SIMPLE ARRAY SIZE
    //cout<<"Enter size of element";
    //cin>>size;
    //int A[size];
    //cout<<sizeof A<<endl;

    //DYNAMIC ARRAY
    cout<<"Enter size of element";
    cin>>size;
    int *p = new int[size];
    cout<<sizeof *p<<endl;
    delete []p;
    cout<<"Enter a new size";
    cin>>size;
     p = new int[size];
     cout<<sizeof p<<endl;
    return 0;
}
