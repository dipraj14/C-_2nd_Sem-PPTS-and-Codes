#include<iostream>
#include<fstream>
using namespace std;
class complex1
{
float x,y;
public:
complex1()
{
   x=0.0;
   y=0.0;
}
complex1(float real,float imag)
{
x=real;
y=imag;
}
friend complex1 operator+(complex1,complex1);
void show_data()
{
cout<<x<<" +i"<<y<<"\n";
}
};
complex1 operator+(complex1 o1,complex1 o2)
{
complex1 temp;
temp.x=o1.x+o2.x;
temp.y=o1.y+o2.y;
return temp;
}
int main()
{
complex1 o1(2.7,3.6),o2(4.1,5.7),o3;
o3=o1+o2;
//o3=operator+(o1,o2);
o3.show_data();
}
