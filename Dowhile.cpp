#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x;
	cout<<"Enter the number"<<endl;
	cin>>x;
	do{
		cout<<"Multiple of given number is = "<<x<<endl;
		x+=2;

	}while(x<20);
}