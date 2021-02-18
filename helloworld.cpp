#include <iostream>

using namespace std;

void sayHi(string name, int age) {
    cout << "Hello" << name << " nguyen, you are" << age << " years old";
}


int main()
{
    sayHi("David", 23);

    return 0;
}