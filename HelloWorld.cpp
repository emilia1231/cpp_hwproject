/* hello.cpp */
#include <iostream>
using namespace std;
int main()
{
    cout << "Please enter your name: ";
string name;
    cin >> name;
    cout << "Hello, " << name;
    cout << "\n";
/* Allen's first commit below */
// int count = 0;
string book = name + " is reading a book"; 
    cout << book + "\n";
return 0;
}