#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter two numbers = "<<endl;
	cin>>a>>b;
	cout<<"Enter choice=\n1.Add\n2.Subtract\n3.multiply\n4.divide"<<endl;
	cin>>c;
	if(c==1)
	{
		cout<<"Addition is "<<a+b;
	}
	else if(c == 2)
	{
		cout<<"subtraction is "<<b-a;
	}
	else if(c==3)
	{
		cout<<"Multtiplication is "<<a*b;
	}
	else if(c==4)
	{
		cout<<"divvision  is "<<b/a;
	}
	else
	{
		cout<<"invalid task";
	}
	return 0;
}