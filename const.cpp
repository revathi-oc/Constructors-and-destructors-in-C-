//REVATHI OC
//23070123105
#include <iostream>
using namespace std;
class Myclass
{
    
    public:
    Myclass(int side)
    {
       
        int area= side*side;
        cout<<"Area of square is: "<<area;
    }
    Myclass(int length, int bredth)
    {
        
        int area= length*bredth;
        cout<<"Area of rectangle is:"<<area;
    }
    
};

int main() 
{
   cout<<" Area using constructors"<<endl<<endl;
   int side,length,breadth,ch;
   cout<<"Enter your choice foe area 1:square 2:rectangle: ";
   cin>>ch;
   if (ch==1)
   {
       cout<<"Enter side of square: ";
       cin>>side;
       Myclass obj1(side);
   }
   else if(ch==2)
   {
       cout<<"Enter length, bredth of rectangle ";
       cin>> length;
       cin>>breadth;
       Myclass obj2(length,breadth);
   }
  
   return 0;
}
