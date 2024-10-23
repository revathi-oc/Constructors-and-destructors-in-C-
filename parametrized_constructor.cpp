//REVATHI OC
//23070123105
#include <iostream>
using namespace std;
class Myclass
{
public:
Myclass(int value)
{
cout<<"Your entered value is: "<<value<<endl;
}

};

int main()
{
cout<<"Parametrized constructor"<<endl<<endl;
int a;
cout<<"Enter a value: ";
cin>>a;
Myclass obj(a);

return 0;
}
