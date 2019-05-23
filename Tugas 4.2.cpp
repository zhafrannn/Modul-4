#include<iostream>
using namespace std;
int main()
{
	cout<< "Tahun kabisat antara tahun ke tahun\n";
	int tahun1, tahun2;
	cout<< "Masukan tahun pertama : ";
	cin>> tahun1;
	cout<< "Masukan tahun kedua : ";
	cin>> tahun2;
	while (tahun1<=tahun2)
	{
		if (tahun1%4==0)
		cout<< tahun1 << " Merupakan Tahun Kabisat" << endl;
		tahun1++;
	}
}
