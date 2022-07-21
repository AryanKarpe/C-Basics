#include<iostream>
using namespace std;
void ak(int x);
void pbr(int *x);
int main()
{
	int aryan=10;
	int karpe=11;
	pbr(&karpe);
	pbr(&aryan);
	cout<<aryan<<endl<<karpe;
}

void ak(int x){							//pass by valure = passing copy
	x=99;
}
void pbr(int *x){						//pass by refrence = passing variable address
	*x=66;
}