#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
vector<string> test;
test.push_back ("test1");
test.push_back ("test2");
test.push_back ("test3");
test.push_back ("test4");

cout << test.at(0)<< endl;
cout << test.at(1)<< endl;
cout << test.at(2)<< endl;
cout << test.size()<< endl;

	return 0;
}
