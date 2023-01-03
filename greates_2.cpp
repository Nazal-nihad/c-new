//program to find largest number from given numbers

#include <iostream>

int main()
{
	int i,largest_no,n;

    std::cout<<"enter how many numbers you want to check: ";
    std::cin>>n;

    largest_no = 0;
    
    while (n>0)
    {
        std::cout<<"enter no :";
        std::cin>>i;

        if(i>largest_no)
        {
            largest_no = i;
        }

        n--;
    }
    
    std::cout<<"largest no is :"<<largest_no<<'\n';

	return 0;

}
