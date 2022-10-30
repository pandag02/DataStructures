#include "QueueHeader.h"

LinkedQueue::LinkedQueue(): C(), n(0){}

int LinkedQueue::size() const{return 0;}

bool LinkedQueue::empty() const{return n == 0;}

void LinkedQueue::enqueue(const Elem& e){
    C.add(e);
    C.advance();
    n++;
}
const Elem& LinkedQueue::front(){
    if(empty()){cout <<"데이터가 없습니다"<<endl;}
    return C.front();
}

void LinkedQueue::dequeue(){
    if(empty()){cout <<"데이터가 없습니다"<<endl; return;}
    C.remove();
    n--;
}