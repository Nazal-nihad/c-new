//program to display the given no of 'fibonacci' series

#include <iostream>
int main()
{
	int i,a,b,c,n;

	a = 0;
	b = 1;
	
	std::cout<<"enter the number of fibonacci numbers : ";
	std::cin>>n;

	std::cout<<a<<" , "<<b;

	for(i=1;i<=n-2;i++)
	{
		c=a+b; //interchange a and b values and make a new c value
		a=b;
		b=c;		
		std::cout<<" , "<<c;
	}

	return 0;

}

