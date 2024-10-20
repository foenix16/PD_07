#include<iostream>
using namespace std;
void PrintDiamond(int Rowsize)
{
    for(int row=Rowsize; row>=1 ; row--)
    {
       for(int col=0; col<=row-1 ; col++)
        {
           cout << "*";
	}
	   cout << endl;
    }
}

main()
{
int Rowsize;
cout << "Enter the number of rows desired : " ;
cin >> Rowsize;
PrintDiamond(Rowsize);
}