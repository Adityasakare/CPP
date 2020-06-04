#include <iostream>

using namespace std;

int main()
{
    int amt, dis;
    cout << "Enter bill ammount: " << endl;
    cin>>amt;
    if (amt<100)
        cout<<"No Discount";
    else if (amt>=100 && amt<500)
    dis = amt%10;
    cout<<"Discounted bill is:"<<dis<<endl;
    if (amt>=500)
        dis = amt%20;
    cout<<"Discounted bill is:"<<dis<<endl;

    return 0;
}
