#include<iostream>
#include<cmath>
using namespace std;
class ak{
	public: 
	ak(){
		cout<<""<<endl;
	}
	public:
		void forloop(){
			int a;
			cout<<"Even numbers from 2 to 20 are"<<endl;
			for(a=2;a<=20;a+=2){
				cout<<a<<endl;
			}
		}
};
void aryan(){
	int a,b,sum;
	cout<<"Enter two number to add"<<endl;
	cin>>a;
	cin>>b;
	sum=a+b;
	cout<<"Sum of two number is= "<<sum<<endl;
}
int main()
{
	aryan();
	
	if(5>10)
		cout<<"5 is greater 10"<<endl;
	else
	cout<<"5 is less than 10"<<endl;
	
	class ak ob;
	ob.forloop();
}