//program to check if the given year is leap or not 

#include <iostream>
int main()
{
int year;

std::cout<<"enter a year to check leap or not :";
std::cin>>year;

if(year%4 == 0 or year%400 == 0 and year%100 != 0 )
{
    std::cout<<"it is a leap year \n";
}
else
{
    std::cout<<"it is not a leap year \n";
}

return 0;

}