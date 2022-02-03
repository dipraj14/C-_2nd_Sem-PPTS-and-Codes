#include<iostream>
using namespace std;
class complex1
{
int x;
public:
complex1()
{
   x=0;
}
complex1(int num)
{
x=num;
}
complex1 operator*(complex1 obj1)
{
	complex1 temp;
	temp.x=x*obj1.x;
	return temp;
}
friend complex1 operator/(complex1,complex1);
void show_data()
{
cout<<x<<endl;
}
};
complex1 operator/(complex1 o1,complex1 o2)
{
complex1 temp;
temp.x=o1.x/o2.x;
return temp;
}
int main()
{
complex1 o1(4),o2(2),o3;
o3=o1*o2;
cout<<"\n Multiplication"<<endl;
o3.show_data();
complex1 o4,o5(6),o6(3);
cout<<"\n Division"<<endl;
o4=o5/o6;
o4.show_data();
return 0;
}
