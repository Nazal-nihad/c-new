//program to check no of even and odd numbers from the given input

#include <iostream>
int main()
{
	int number,odd_count,even_count,i,n;

	odd_count =  even_count = 0;


	std::cout<<"enter no of input :";
	std::cin>>i;


	while (i>0)
	{
		std::cout<<"enter no: ";
		std::cin>>n;

		if (n%2==0)
		{
			even_count += 1;
		}
		else
		{
			odd_count+=1;
		}
		i--;
	}
	

	std::cout<<even_count<<" even numbers and "<<odd_count<<"odd numbers \n";

	return 0;

}
