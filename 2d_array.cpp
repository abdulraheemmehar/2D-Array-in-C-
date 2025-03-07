#include <iostream>
using namespace std;
int main()
{
	const int R = 3;
	const int C = 3;

	int **x = new int* [R];

	for (int i = 0; i < R; i++)
			x[i] = new int[C];

	x[0][1] = 1121;

	cout << *(*(x + 0) + 1) << endl;

	cout << x[0][1] << endl;

	return 0;
	/*cout << "Enter number of rows : ";
	cin >> rows;
	cout << "Enter number of columns : ";
	cin >> col;
	int** seating = new int* [rows];*/


}