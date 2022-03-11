#include <iostream>
#include <string>
#include <vector>
using namespace std;

int addNumbers (int num1, int num2){
return num1 + num2;
}

int main()
{
int sum = addNumbers(1, 32766);
	cout << sum << endl;
	system("pause");
	return 0;
}
