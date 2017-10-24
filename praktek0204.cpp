#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int LR=42;
	cout<<"luas rumah	:	"<<LR<<"	m2	"<<endl;
	double LP=1.87596;
	cout<<"luas 1 box parket	:	"<<LP<<"	m2	"<<endl;
	double JP=LR/LP;
	cout<<"jumlah box parkat	:	"<<JP<<"	m2	"<<endl;
	double BPR=JP*500;
}
