//Author:
#include<iostream>

int main()
{
    int first = 0;
    int second = 0;
    int biggest = 0;

  std::cout<<"Please enter a whole number:\n";
  std::cin>>first;

  std::cout<<"Please enter another whole number:\n";
  std::cin>>second; 

  if (first > second)
    {
        std::cout<<"Of those two numbers, the biggest is: "<<first<<std::endl;
  }
  else if (second > first) 
    {
        std::cout<<"Of those two numbers, the biggest is: "<<second<<std::endl;
  }

  else if (first == second)
    {
        std::cout<<"Both integers are the same"<<std::endl;
  }

  else
    {
        std::cout<<"?"<<std::endl;
   }

  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
