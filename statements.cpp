#include <iostream>
#include <string>
using namespace std;

int main()
{

bool isTester = false;
bool isSmart = false;


if(isTester && isSmart){
cout << "You're a tester, right?" << endl;

} else if(isTester && !isSmart){
cout << "You're not a tester." << endl;
} else {
	cout << "You're probably not an tester." << endl;
}
if (1 > 3){
cout << "number omparison was true" << endl;


}

if('a' > 'b')
cout << "character comparison is true" << endl;


string myString = "cat";
if(myString.compare("cat") == 0)
cout << "string comparison is true" << endl;


system ("pause");
	return 0;
	}
