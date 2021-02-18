#include <iostream>

using namespace std;

int main()
{
    int numberGrid[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    for (int i = 0; i < sizeof(numberGrid) / sizeof(numberGrid[0]); i++) {
        for (int j = 0; j < sizeof(numberGrid[0]) / sizeof(numberGrid[0][0]); j++) {
            cout << numberGrid[i][j];
        } 
    } 

    return 0;
}