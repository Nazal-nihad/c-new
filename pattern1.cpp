//program to print simple pyramid pattern

#include <iostream>
int main()
{
	int i,j,n;

	std::cout<<"enter no of lines :";
	std::cin>>n;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			std::cout<<"*";
		}
		std::cout<<"\n";
	}

	return 0;
}
