#include<iostream>
using namespace std;
class add
{
	int a,b,c;
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
	int a,b,c;
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
int main()
{	int a;
	cout<<"1.add\n2.sub"<<endl;
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
	else 
	{
		cout<<"invalid"<<endl;
	}
}