#include <iostream>
using namespace std;

int triangle(int num) 
{
    return (num*(num + 1))/2;
}

main() 
{
  int num;
  cout << "Enter the number of Triangle whose dots are desired : ";
  cin >> num;
  cout << "The dots in the triangle is : " << triangle(num);
   
}
