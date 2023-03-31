#include <iostream>
using namespace std;

int arr[20];
int cup_count = 0;
int mov_count = 0;
int n;
void input() {
	while (true)
	{
		cout << "Masukan Panjang Element Array : ";
		cin >> n;
		if (n <= 20)
			break;
		else
			cout << "Maksimum Panjang Array adalah 20" << endl;
	}
	cout << "===================" << endl;
	cout << "Enter Array Element" << endl;
	cout << "===================" << endl;
}