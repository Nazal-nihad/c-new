//program to find largest number from given numbers

#include <iostream>

int main()
{
	int i,largest_no,n;

    std::cout<<"enter how many numbers you want to check: ";
    std::cin>>i;

    largest_no = 0;
    
    while (i>0)
    {
        std::cout<<"enter no :";
        std::cin>>n;

        if(n>largest_no)
        {
            largest_no = n;
        }

        i--;
    }
    
    std::cout<<"largest no is :"<<largest_no<<'\n';

	return 0;

}