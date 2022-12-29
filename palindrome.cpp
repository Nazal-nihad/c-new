#include <iostream>
int main()
{
        int n,i,j,k,sum,b;
        sum =  0;

        std::cout<<"enter the digit to reverse :";
        std::cin>>n;

        k=n;
	b=n;

        for(i=1;n>=1;i++)
        {
        n=n/10;
        }

        for(j=1;j!=i;j++)
        {
                sum = sum*10 + k%10;
                k=(k-k%10)/10;
        }

        std::cout<<sum<<'\n';

	if(sum==b)
	{
		std::cout<<"it is a palindrome \n";
	}
	else
	{
		std::cout<<"it is not a palindrome \n";
	}
        return 0;

}
