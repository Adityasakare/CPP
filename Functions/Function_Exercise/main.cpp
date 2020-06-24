#include<iostream>

using namespace std;
 int A[10] = {0, 1, 2, 3, 5, 12, 16, 20, 25, 60};
 int search(int key, int n=10)
{
    for (int i=0; i<n; i++)
    {
        if (key==A[i])

           cout<<"key Location is"<<i<<endl;

    }
return -1;
}


int main()
{
    int A[10] = {0, 1, 2, 3, 5, 12, 16, 20, 25, 60};
    int n =10;
    int key;
    for (int i=0; i<n; i++)
    {
        cout<<A[i];
    }
    cout<<"Enter the key: "<<endl;
    cin>>key;
    search(key);
    return 0;
}
