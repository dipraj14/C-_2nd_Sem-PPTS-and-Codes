//Few Exceptions of inline functions:
//For functions returning values,if a loop,switch, or goto exists
//If functions contain static variables
//If inline functions are recursive
#include<iostream>
using namespace std;
inline double div(double p,double q)
{
	return(p/q);
}
int main()
{
	double a=12.4;
	double b=4.0;
	cout<<div(a,b)<<"\n";
	return 0;
}
