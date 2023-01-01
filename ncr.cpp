//program to find ncr of the given 2 numbers

#include <iostream>

int factorial(int n); //function for finding factorial
int factorial(int n)
{
	int p=1;
	while(n>=1)
	{
		p=p*n;
		n=n-1;
	}
	
	return p;
}

int ncr(int num1,int num2); //function to find ncr
int ncr(int num1,int num2)
{
	int a = factorial(num1);
	int b = factorial(num2);
	int c = factorial((num1-num2));

	int result = a/(b*c);
	std::cout<<result;
	return result;
}

int main()
{
	int number1,number2;

	std::cout<<"enter the numbers to find ncr :\n"; 
	std::cin>>number1>>number2;

	ncr(number1,number2);

	return 0;
}
