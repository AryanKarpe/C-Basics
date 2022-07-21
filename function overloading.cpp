#include<iostream>
using namespace std;
void printnumber(int a){
	cout<<"Print integer : "<<a<<endl;
}
void printnumber(float x){
	cout<<"print decimal :"<<x<<endl;
}
int main()
{
	int a = 20;
	float b = 277.551;
	printnumber(a);
	printnumber(a+=1);
	printnumber(a+=2);
	printnumber(a+b);
}