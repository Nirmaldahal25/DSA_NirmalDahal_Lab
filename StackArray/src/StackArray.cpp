#include "StackArray.hpp"
#include <iostream>
int main()
{
    StackArray<int, 10> stack;
    for(int i=0 ; i<10;i++)
    {
        stack.push(i+1000);
    }

    std::cout<<stack.top()<<"    Top\n";
    std::cout<<"printing Stack\n";
    while(!stack.isEmpty())
    {
        std::cout<<stack.pop()<<'\n';
    }
    std::cout<<std::endl;
}