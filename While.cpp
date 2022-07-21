//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	int a=0;
//	while(a<=100){
//		cout<<"even number is =  "<<a<<endl;
//		a++
//	}
//}

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a;
	int total;
	int number;
	cout<<"Enter the age of person or -1 to quit  "<<endl;
	cin>>a;
	
	while(a != -1)
	{
		total = total+a;2
		number++;
		
		cout<<"Enter the age of number or -1 to quit "<<endl;
		cin>>a;
	}
	cout<<"Number of people entered: "<<number<<endl;
	cout<<"Average of age is: "<<total/number;
	return 0;
}