#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int u,j, juml, rata;
	int Data[5];
	cout<<"Masukan banyaknya data=";
	cin>>j;
	cout<<endl;
	for(int u=0; u<j; u++){
		cout<<"Data ["<<u+1<<"]=";
		cin>>Data[u];
		juml+=Data[u];
	}
	rata=juml/j;
	cout<<"Banyaknya data="<<j<<endl;
	cout<<"Nilai Rata-rata="<<rata<<endl;
	cout<<"Jumlah="<<juml<<endl;
}
