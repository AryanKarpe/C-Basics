#include<iostream>
using namespace std;
int main()
{
	string str[2][2];
	int i,j;
	cout<<"ENTER 4 ELEMENTS"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>str[i][j];
		}
	}
	cout<<"ELEMENTS ARE "<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<str[i][j]<<" ";
		}
		cout<<endl;
	}
}