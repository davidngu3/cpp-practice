#include <iostream>

using namespace std;

int main()
{
    int age = 19;

    int *pAge =  &age; // pointer to address of age
    double gpa = 2.7;
    double *pGpa = & gpa;

    cout << pAge;

    return 0;
}