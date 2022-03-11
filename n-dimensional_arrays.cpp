#include <iostream>
#include <string>
using namespace std;

int main()
{
int numberGrid [2][3] = { {1, 2, 3}, {4, 5, 6} };
	numberGrid[0][1] = 99;

	cout << numberGrid[0][0] << endl;

	cout << numberGrid[0][1] << endl;
	system("pause");
	return 0;
}
