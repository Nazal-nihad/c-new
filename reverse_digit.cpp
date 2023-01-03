//program to reverse the given number

#include <iostream>
int main()
{
	int n, sum;
	sum =  0;

	std::cout<<"enter the digit to reverse :";
	std::cin>>n;

	while (n > 0)
	{
	    sum = sum * 10 + n % 10;
	    n = n / 10;
	}

	std::cout<<sum<<'\n';

	return 0;
}
