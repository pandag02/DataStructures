#ifndef SINGLY
#define SINGLY
#include <string>
using namespace std;

class StringNode{
    private: //원래 private인데 friend가 말 안들음 ㅠ 
        string elem;
        StringNode* next;

        friend class StringLinkedList;
        //원래는 private 은 접근 못하지만 friend가 되면 가능
};


class StringLinkedList{
    public:
        StringLinkedList();
        ~StringLinkedList();
        bool empty() const;
        const string& front()const;
        void  addFront(const string& e);
        void removeFront();

    private:
        StringNode* head;
};

#endif
