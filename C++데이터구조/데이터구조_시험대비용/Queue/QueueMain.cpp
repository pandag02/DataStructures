#include "Queue.cpp"


int main (void){
    
    LinkedQueue Q;
    Q.enqueue(panda("papa", 1));
    panda e = Q.front();
    cout << e.getName() << endl;
    cout << e.getIndex() << endl;
    return 0;
}