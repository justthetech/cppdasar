//Name	: Muhammad Harris Munandar
//Nim		: 190150078
//Tanggal	: 27 Desember 2019
//Judul	: Kode Dasar

#include <iostream>
using namespace std;

int main()
{
int n;
cout << "n = "; cin >> n;
for (int a = n; a >= 1; a--)
{
for (int b = 1; b <= a; b++)
{
cout << "*";
}
cout << endl;
}
}
