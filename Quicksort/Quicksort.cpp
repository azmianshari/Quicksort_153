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

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void swap(int x, int y)
{
	int temp;
	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void q_short(int low, int high)
{
	int pivot, i, j;
	if (low > high)
		return;
	i = low + 1;
	j = high;
	pivot = arr[low];
	while (i <= 1)
	{
		while ((arr[1] <= pivot) && ())
		}
}