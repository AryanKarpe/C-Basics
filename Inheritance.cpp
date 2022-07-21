#include<iostream>
using namespace std;
int a,b,c;

class add
{
	
	public:
		void input(){
			cout<<"Enter two numberss to add"<<endl;
			cin>>a>>b;
		}
		void output(){
			c=a+b;
			cout<<"addition is "<<c<<endl;
		}
};
class sub
{
	
	public:
		void input(){
			cout<<"Enter two numberss to subtract"<<endl;
			cin>>a>>b;
		}
		void output(){
			c=a-b;
			cout<<"sub of two numberss is "<<c<<endl;
		}
};
class multi : public add, public sub
{
	public:
	void multiply(){
		cout<<"two numbers"<<endl;
		cin>>a>>b;
		c=a*b;
		cout<<"multiplication of digit is "<<c;
	}
};
int main()
{	
	cout<<"1.add\n2.sub\n3.multiply"<<endl;
	cin>>a;
	if(a==1)
	{
		add obj;
	obj.input();
	obj.output();
	}
	else if(a==2)
	{
		sub obj1;
	obj1.input();
	obj1.output();
	}
	else if(a==3)
	{
		multi obj3;
		obj3.multiply();
	}
}