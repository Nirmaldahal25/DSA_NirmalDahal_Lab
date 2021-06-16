#include "CircularQueue.hpp"

int main(){
    CircularQueue<int,4> Qu;
    Qu.enqueue(123);
    Qu.enqueue(22);
    Qu.enqueue(12123);
    Qu.enqueue(124);
    std::cout<<Qu.front()<<"  Front\n";
    std::cout<<Qu.dequeue()<<std::endl;
    std::cout<<Qu.front()<<"  Front\n";
    std::cout<<Qu.back()<<"   Back\n";
    while(!Qu.isEmpty())
    {
    	std::cout<<Qu.dequeue()<<'\n';
    }
    std::cout<<std::endl;
    return 0;
}