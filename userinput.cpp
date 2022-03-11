#include <iostream>
#include <string>
using namespace std;

int main()
{

const wchar_t CLASS_NAME[] =L"The Insider Sandrush";


string name;
cout << "Please enter your name, so we can get this end quickly. Thanks!: ";
cin >> name;
cout << "Hi, " << name << endl;

int num1, num2;
cout << "Enter first number: ";
cin >> num1;
cout << "Enter second number: ";
cin >> num2;
cout << "The answer is...: " << num1 + num2 << endl;

system("pause");

	return 0;
}
