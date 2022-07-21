#include<iostream>
#include<stdio.h>
using namespace std;
void aryan();
int main()
{
	char c;
	int a=10;
	double b=5454.2454;
	cout<<sizeof(c)<<endl;
	cout<<sizeof(a)<<endl;
	cout<<sizeof(b)<<endl;
	aryan();
}

void aryan(){
	double ak[10];
	cout<<sizeof(ak)<<endl;
	cout<<sizeof(ak)/sizeof(ak[0]);
}