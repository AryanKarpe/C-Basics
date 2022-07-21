#include<iostream>
using namespace std;
//void aryan(){
//	cout<<"ARYAN KARPE\n----------------------";
	//aryan();
//}
//int main()
//{
//	aryan();
//}
int fact(int x){
	if(x==1){														//ALWAYS USE REST CASSE SUCH AS IF ELSE AND GIVE CONNDITION TO STOP REECURSION
		return 1;
	}else{
		return x*fact(x-1); //12,6,2
	}
}
int main()
{
	cout<<fact(4)<<endl;
}