//program to find the factorial of a given number

#include <iostream>

using namespace std;

int factorial(int n); //factorial function declared

int factorial(int n) //factorial function defined
{
    int p = 1;
    while(n>=1)
    {
    p=p*n;
    n=n-1;
    }
    return p;
}

int main()
{
    
int n,r;

cout<<"enter the number to find the factorial : ";
cin>>n;

cout<<"factorial of "<<n<<" is "<<factorial(n)<<'\n';

return 0;

}

