//program to check if a given integer is prime or not

#include <iostream>
int main()
{
	int i,j,n;

	std::cout<<"enter the number to check: ";
	std::cin>>n;

	if (n==1)
	{
		std::cout<<"not a prime \n";
		return 0;
	}

	else if(n==2)
	{
		std::cout<<"prime \n";
		return 0;
	}

	for(j=2;j<n;j++) //will check from 2 to n-1 values
	{
		i = n%j; //will divide from 2 to n-1
		
		if(i==0)
		{
			std::cout<<n<<" is not a prime number \n";
			return 0;
		}
	}

	std::cout<<n<<" is a prime number \n";

	return 0;

}
