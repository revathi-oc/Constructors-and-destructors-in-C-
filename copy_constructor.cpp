//REVATHI OC
//23070123105
#include <iostream>
using namespace std;
class Myclass
{
private:
int value;
public:
Myclass(int val)
{
value=val;
cout<<"Your entered value is:" <<value<<endl;
}
Myclass(const Myclass&obj)
{
value=obj.value;
cout<<"Copy constructor called! Value:"<< value<<endl;

}
};

int main()
{
cout<<"Copy constructor"<<endl<<endl;
int a;
cout<<"Enter a value: ";
cin>>a;
Myclass obj1(a);
Myclass obj2=obj1;
return 0;
}
