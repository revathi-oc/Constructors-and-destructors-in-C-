#include <iostream>
using namespace std;
class Myclass
{
    private:
    int value1,value2;
    public:
    Myclass(int val1=0, int val2=0)
    {
        value1=val1;
        value2=val2;
        cout<<"Constructor called! Your entered value is: "<<value1<<" and "<<value2 <<endl;
    }
    
};

int main() 
{
   cout<<"Constructor with default arguments"<<endl<<endl;
   Myclass obj1; 
   Myclass obj2(5);
   Myclass obj3(3,7);
   return 0;
}