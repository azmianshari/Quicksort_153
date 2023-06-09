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
	cout << "\n===================" << endl;
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
    if (low > high)                                                 // Langkah algoritma No. 1
        return;

    // Partition the list into two parts:
    // One containing element less that or equal to privat
    // Outher containing elements greater than pivot

    pivot = arr[low];                                               // Langkah algoritma No. 2

    i = low + 1;                                                    // Langkah algoritma No. 3
    j = high;                                                       // Langkah algoritma No. 4


    while (i <= j)                                                  // Langkah algoritma No. 10
    {
        
        while ((arr[i] <= pivot) && (i <= high))                    // Langkah algoritma No. 5
        {
            i++;                                                    // Langkah algoritma No. 6
            cmp_count++;
        }
        cmp_count++;

        
        while ((arr[j] > pivot) && (j >= low))                       // Langkah algoritma No. 7
        {
            j--;                                                     // Langkah algoritma No. 8
            cmp_count++;
        }
        cmp_count++;
        
        if (i < j)                                                          // Langkah algoritma No. 9
        {
            
            swap(i, j);
            mov_count++;
        }
    }

   
    if (low < j)                                                            // Langkah algoritma No. 11
    {
        
        swap(low, j);
        mov_count++;
    }
    
    q_short(low, j - 1);                                                    // Langkah algoritma No. 12

    
    q_short(j + 1, high);                                                   // Langkah algoritma No. 13 

}

void display() {
    cout << "\n----------" << endl;
    cout << "Sorted Array" << endl;
    cout << "\n----------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n\nNumber of comparasion: " << cmp_count << endl;
    cout << "Number of data movements: " << mov_count << endl;
}

int main()
{
    input();
    q_short(0, n - 1);                                                     
    display();
    system("pause");

    return 0;
}