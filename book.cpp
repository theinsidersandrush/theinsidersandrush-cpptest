#include <iostream>
#include <string>
using namespace std;
class Book{
     public:
          string title;
          string author;

          void readBook(){
               cout << "Reading " + this->title + " by " + this->author << endl;
          }
};

Book book1("test1", "test1");
cout << book1
system("pause");
return 0;
}