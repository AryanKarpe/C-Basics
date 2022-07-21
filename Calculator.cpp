#include <iostream>
using namespace std;
int main()
{
	int a, b, sum, sub, multiply;
	float divide;
	cout<<"Enter first number\n";
	cin>> a;
	cout<<"Enter second number\n";
	cin>> b;
	sum=a+b;
	cout<<"Sum of you given numbers is = "<<sum<<"\n";
	sub=b-a;
	cout<<"Subtraction of numbers is = "<<sub<<"\n";
	multiply=a*b;
	cout<<"Multiplaication of numbers is = "<<multiply<<"\n";
	divide=b/a;
	cout<<"Division of numbers is = "<<divide<<"\n";
}