#include<iostream>
using namespace std;
//HOW ARRAY IS FORMED
//int main()
//{
//	int aryan[10] = {100,15,78,2,65,8,1};
//	cout<<aryan[2];
//}



//ARRAY ALOCATION
//int main()
//{
//	int aryan[10]={15,5,7,8,9,6,1,54,1};
	//
	//cout<<"Element -- Value"<<endl;
	
//	for(int y=0; y<10; ++y){
///	aryan[y]=99;
	//	cout<< y <<"  -------  "<<aryan[y]<<endl;
	//}
//}


//Sum of array
//int main()
//{	int array[10] = {1,2,3,4,5,6};
//	int sum =0;
	//	for(int x=0 ;x<10;x++)
//	{		sum+=array[x];	}
	//	cout<<sum<<endl;}
	

void printarray(int thearray[], int sizeofarray){
	for(int x=0; x<sizeofarray; x++){
		cout<<thearray[x]<<endl;	
	}
}
int main()
{
	int aryan[5] = {1,2,3,4};
	int jeff[5]={5,6,8,9};
	printarray(aryan, 5);
	printarray(jeff,5);
}



