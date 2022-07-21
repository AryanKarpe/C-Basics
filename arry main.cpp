#include<iostream>
using namespace std;
int main()
{
	int aryan[5];
	int *ak0=&aryan[0];
	int *ak1=&aryan[1];
	int *ak2=&aryan[2];


	cout<<"ak0 is "<<ak0<<endl;
	cout<<"ak1 is "<<ak1<<endl;
	cout<<"ak2 is "<<ak2<<endl;
	
	ak0 +=2;
	cout<<"ak0 is now at "<<ak0<<endl;
}