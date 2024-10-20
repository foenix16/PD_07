#include <iostream>
using namespace std;

bool isPrime(int num) 
{
    if (num <= 1) 
        return false; 
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0)
            return false;  
    }    
    return true;  
}

int primorial(int n) 
{
    int count = 0; 
    int num = 2;    
    int primorial = 1; 

    while (count < n)  
    {
        if (isPrime(num)) 
        {
            primorial *= num; 
            count++;
        }
        num++;  
    }    
    return primorial; 
}
main() 
{
    int n;
    cout << "Enter a number n to find its Primorial: ";
    cin >> n;
    
    int result = primorial(n);
    cout << "Primorial is: " << result << endl;

}
