#include<iostream>
using namespace std;

int main(){
			//colum,row
	int aryan[2][3] = {{1,2,5},{10,13,15}};
	for(int x=0;x<2;x++)
		for(int y=0;y<3;y++){
		cout<<aryan[x][y]<<" ";
	}
}