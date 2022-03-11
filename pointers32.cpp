#include <iostream>
#include <string>
using namespace std;

int main()
{
int num = 10;
cout << &num <<endl;

int *pNum = &num;
cout << pNum <<endl;
cout << *pNum << endl;

system("pause");

	return 0;
}
