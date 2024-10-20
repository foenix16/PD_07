#include <iostream>
using namespace std;
bool isPrime(int num) 
{
        if(num <= 1) 
        {
           return false; 
   	}
   	for(int i = 2; i <= num/2; i++) 
        {
           if(num % i == 0) 
           {
             return false; 
           }
        }
    return true;
}

main()
{
    int num;
    cout << "Enter The Number That You Want To Check For Prime Number : ";
    cin >> num;
    cout << isPrime(num);
}

