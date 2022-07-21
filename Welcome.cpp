//#include <iostream>				//preprocessor directive
//using namespace std;
//int main()
//{
//	cout<<"Hello world!!";
//	cout<<"My name is Aryan"<< endl;
//	cout<<"I am a IT engineer\n\n\n";
//	cout<<"I live\nin \n Pune\n";
//	int aryan = 5;
//	cout<<aryan<<"\n";
//	int a=10;
//	int b=5;
//	int sum = a+b;
//	cout<<sum;
	
//}
#include <iostream>
using namespace std;						//calling function
void Aryan(){
	cout<<"Aryan is a boy \n";
}
void Karpe();
void number();
int main()
{
	int x;
	Karpe();
	Aryan();
	Karpe();
	number();
	if (5>10)											//if else
	cout<<"True";
	else
	cout<<"False 5 is greater than 10";
	return 0;
}
void Karpe(){
	cout<<"Karpe is surname\n"; 
	
}
void number(){
	int x;
	cout<<"Enter age=  \n";
	cin>>x;
	cout<<"Aryan Karpe age is = "<<x<<"\n"; 
	
}

