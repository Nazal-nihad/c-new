#include <iostream>
int main()
{
	int i,a,b,c,n;

	a = 0;
	b = 1;
	
	std::cout<<"enter the number of fibonacci numbers : \n";
	std::cin>>n;

	std::cout<<a<<"\n"<<b<<'\n';

	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		a=b;
		b=c;		
		std::cout<<c<<'\n';
	}

	return 0;

}

