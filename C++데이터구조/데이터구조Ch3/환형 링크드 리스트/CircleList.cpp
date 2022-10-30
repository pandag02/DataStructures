#include "CircleList.h"
#include <iostream>


CircleList::CircleList(): cursor(NULL){}
CircleList::~CircleList(){ while(!empty()) remove();}

bool CircleList::empty() const{return cursor == NULL;}
const Elem& CircleList::back() const{return cursor -> elem;} //주소값을 되돌려줄 때 const Elem&
const Elem& CircleList::front() const{return cursor -> next -> elem;}
const Elem& CircleList::nextshow() const{return cursor -> next -> next -> elem;}
void CircleList::advance(){cursor = cursor -> next;}

void CircleList::add(const Elem& e){
    CNode* v = new CNode;
    v ->elem = e;
    if (cursor == NULL){
        v -> next = v;
        cursor = v;
    }

    else{
        v -> next = cursor -> next;
        cursor -> next = v;
    }
}

void CircleList::remove(){
    if(cursor == NULL){
        cout << "삭제할 데이터가 없습니다."<< endl;
    }
    
    CNode* old = cursor -> next;  //front 삭제
    if(old == cursor) //데이터가 하나일 때 
        cursor = NULL; //커서가 비어버림.
    else 
        cursor -> next = old -> next;
    delete old;
}

void CircleList::backremove(){   //back삭제  자료가 3개 이상일 때만 작동
    CNode* first = cursor -> next; 
    CNode* ol = cursor;
    if(first == cursor){
        cursor = NULL;
        return;
        
    }

    else if(first-> next == cursor){//노드가 2개일 때 그 중에서 원래 cursor이 가리키고 있더 노드 삭제

        first = first ->next;        
        cursor = cursor ->next;
        cursor->next = cursor;


    }
        
    else {
        while(first != cursor){
            first = first ->next;
            ol = ol->next;
        }
        cursor = ol;
        cursor -> next = first -> next;
        
    }
    delete first;
    
}

void CircleList::allshow(){
    if(cursor == NULL){
        cout<< "출력할 값이 없습니다."<<endl;
        return;
    }
    CNode* hing = cursor -> next; //front 부터 출력
    int i = 1;
    
    if(cursor ==  hing){
        cout << "1. " << hing ->elem<< endl;
    }
    else{
        while(hing != cursor){
        cout << i << ". "<<hing -> elem << endl;
        hing = hing -> next;
        i++;
        }
        cout << i << ". "<<hing -> elem << endl;
        cout << endl;
    }
    return;
    
}

void CircleList::prevshow(){
    CNode* hing = cursor -> next; //
    int i = 1;
    while(hing != cursor){
        cout << i << ". "<<hing -> elem << endl;
        hing = hing -> next;
        i++;
    }
    cout << i << ". "<<hing -> elem << endl;
    cout << endl;
}