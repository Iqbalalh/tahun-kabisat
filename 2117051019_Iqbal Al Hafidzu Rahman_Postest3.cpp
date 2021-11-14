#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Masukkan tahun: ";
	cin>>a;
	if(a%4==0&&a%100!=0||a%400==0)
	cout<<"Tahun "<<a<<" adalah tahun Kabisat";
	else
	cout<<"Bukan tahun Kabisat";
	
}


