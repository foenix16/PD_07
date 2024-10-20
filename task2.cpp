#include <iostream>
using namespace std;
void printUpperPart(int rowsize) 
{
    for (int row = 1; row <= rowsize; row++) 
    {
        for (int col = 1; col <= rowsize - row; col++)
        {
            cout << " ";
        }
        for (int i = 1; i <= row; i++) 
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printLowerPart(int rowsize) 
{
    for (int row = rowsize - 1; row >= 1; row--) 
    {
        for (int col = 1; col <= rowsize - row; col++) 
        {
            cout << " ";
        }
        for (int i = 1; i <= row; i++) 
        {
            cout << "*";
        }
        cout << endl;
    }
}
main() 
{
    int rowsize;
    cout << "Enter desired number of rows: ";
    cin >> rowsize;
    printUpperPart(rowsize);
    printLowerPart(rowsize);
}
