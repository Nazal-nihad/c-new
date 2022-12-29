#include <iostream>
int main()
{
	int n,i,j,k,sum;
	sum =  0;

	std::cout<<"enter the digit to reverse :";
	std::cin>>n;

	k=n;

	for(i=1;n>1;i++)
	{
	n=n/10;
	}

	for(j=1;j<=i;j++)
	{
		sum = sum*10 + k%10;
		k=(k-k%10)/10;
	}

	std::cout<<sum<<'\n';

	return 0;

}
