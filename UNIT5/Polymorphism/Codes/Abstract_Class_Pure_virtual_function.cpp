#include<iostream>
using namespace std;
class sample
{
public:
virtual void example()=0;
void show()
{
cout<<"\nThis is sample abstract class";
}
};
class derived1:public sample
{
public:
void example()
{
cout<<"C++";
}
};
int main()
{
sample *ptr;
derived1 obj1;
ptr=&obj1;
ptr->example();
ptr->show();
}
