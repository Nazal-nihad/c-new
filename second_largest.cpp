//program to find second largest number from given numbers

#include <iostream>

int main()
{
    int i,largest_num,second_large,a,b,c,d,e,f,g,h;

    std::cout<<"enter 8 numbers :\n";
    std::cin>>a>>b>>c>>d>>e>>f>>g>>h;

    int number_list[8] = {a,b,c,d,e,f,g,h};

    largest_num = number_list[0];
    second_large = largest_num ;

    for (i = 1; i < 8; i++)
    {
        if(number_list[i] > largest_num)
        {
            second_large = largest_num;
            largest_num = number_list[i];
        }

        else if(number_list[i] > second_large and number_list[i] < largest_num)
        {
            second_large = number_list[i];
        }

    }
    
    std::cout<<"second largest number is :"<<second_large<<'\n';

    return 0;

}