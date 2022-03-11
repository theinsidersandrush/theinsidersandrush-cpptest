#include <iostream>
#include <string>
#include <vector>
using namespace std;

double division(int a, int b) {
    if(b == 0) {
        throw "You can't divide by zero. Do you think it is possible?";
    }
    return (a/b);
}
int main()
{
    try {
        division(10,0);
    } catch (const char* msg) {
        cerr << msg << endl;
    }
system("pause");
return 0;
}