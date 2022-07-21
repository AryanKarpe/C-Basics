#include<iostream>
#include<string>
using namespace std;
class mathclass{
	public:
	mathclass(){
		cout<<"These are mathematiacl operations\n";
	}
	void add(){
		int x,y,sum;
		cout<<"Enter the numbers\n";
		cin>>x>>y;
		sum=x+y;
		cout<<"Addition of two numbers is="<<sum<<"\n";
	}
	void sub(){
		int x,y,sub;
		cout<<"Enter two numbers:\n";
		cin>>x>>y;
		sub=x-y;
		cout<<"Subtration of two number is:"<<sub<<"\n";
	}
	
};
int main()
{
//	mathclass head;
	mathclass ob;
	ob.add();
	ob.sub();
	return 0;
}