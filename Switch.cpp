#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,select;
	do{
	
	cout<<"Enter two numbers : "<<endl;
	cin>>a>>b;
	cout<<"Select operation"<<endl;
	cout<<"1.Addition\n2.subtraction\n3.Multiplication\n4.Division\n5.End"<<endl;
	cin>>select;
	switch(select){
		case 1:
			cout<<"Addition of two numbers is ="<<a+b<<endl;
			break;
		case 2:
			cout<<"Subtraction of two numbers is ="<<a-b<<endl;
			break;
		case 3:
			cout<<"Multiplication of two number is ="<<a*b<<endl;
			break;
		case 4:
			cout<<"Division of two number is = "<<b/a<<endl;
			break;
	}}
	while(select=5);
}