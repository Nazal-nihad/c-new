//program to find second largest number from given numbers

#include <iostream>

int main()
{
	int i,largest_no,second_largest,n;

    std::cout<<"enter how many numbers you want to check: ";
    std::cin>>i;

    largest_no = 0;
    second_largest = 0;
    
    while (i>0)
    {
        std::cout<<"enter no :";
        std::cin>>n;

        if(n>largest_no)
        {
            second_largest = largest_no;
            largest_no = n;
        }
        else if(n<largest_no and n>second_largest)
        {
            second_largest = n;
        }

        i--;
    }
    
    std::cout<<"second largest no is :"<<second_largest<<'\n';

	return 0;

}