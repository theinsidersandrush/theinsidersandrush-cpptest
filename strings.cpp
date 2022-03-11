#include <iostream>
#include <string>
using namespace std;

int main()
{
#include <string>
string greeting = "Hi";
	
cout << greeting.length();
	cout << greeting[0] << endl;
	cout << greeting.find("llo") << endl;
	cout << greeting.substr(2) << endl;
	cout << greeting.substr(1, 3) << endl;

system("pause");	

	return 0;
}
