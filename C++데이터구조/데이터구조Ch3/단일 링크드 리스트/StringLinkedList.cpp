#include "SinglyLinkedList.h"
#include<iostream>

using namespace std;


StringLinkedList::StringLinkedList(): head(NULL){}

StringLinkedList::~StringLinkedList(){while (!empty()) removeFront();}

bool StringLinkedList::empty()const{return head == NULL;}

const string& StringLinkedList::front() const
{
    while (empty()) {
        cout << "아무것도 없습니다.";
        return "0";
    }

    return (head -> elem);
    

}

void StringLinkedList::addFront(const string& e){
    StringNode* v = new StringNode;
    v->elem = e;
    v->next = head;
    head = v;
}

void StringLinkedList::removeFront(){
    StringNode* old = head;
    head = old ->next;
    delete old;
}