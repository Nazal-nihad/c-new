//program to find sum of 'n' natural numbers

#include <iostream>
int main()
{
	int i,n,sum;
	sum=0;

	std::cout<<"enter no of natural number :";
	std::cin>>n;

	for(i=1;i<=n;i++)
	{
		sum = sum + i;
	}

	std::cout<<"sum of first "<<n<<" natural numbers is "<<sum<<'\n';

	return 0;

}
