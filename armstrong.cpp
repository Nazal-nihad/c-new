
#include <iostream>
#include <cmath>
int main()
{
	int a,i,j,k,n,b,sum;

	std::cout<<"enter the number :";
	std::cin>>n;
	
	k=n;
	a=n;
	sum=0;
	b=0;

	for(i=0;n>0;i++)
	{
		n=n/10;
	}
	
	for(j=1;k>0;j++)
	{
		b=k%10;
		sum=sum+std::pow(b, i); //base b to the power i
		k=(k-b)/10;
	}

	if (sum == a) {
                std::cout << a << " is an Armstrong number" << '\n';
        } else {
                std::cout << a << " is not an Armstrong number" << '\n';
        }

	return 0;
}
