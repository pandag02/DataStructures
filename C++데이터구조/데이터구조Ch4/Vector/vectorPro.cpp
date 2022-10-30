#include <iostream>
#include <vector>
#include<list>
#include<string>

using namespace std;

class inlab{
    public:
        inlab() {};
        inlab(string name) : m_name(name) {};
        string getName() {return m_name;};

    private:
        string m_name;
};

int main(){
    vector<inlab> yourVector(1); //원소를 몇개나 넣을지 이야기하는 것, 넉넉하게 잡아도 됨. 초기화값임, 지가 알아서 늘어남, 초기값이라서 0으로 세팅 되어 있음
    
    yourVector.push_back(inlab("Dd"));
    yourVector.push_back(inlab("pp"));
    
    cout<< yourVector.size()<< endl;
    //cout << yourVector[0].getname() <<endl; 0번은 멤버값이 없어서 이름을 얻어올 수 없다.
    cout << yourVector[1].getName() <<endl;
    cout << yourVector[2].getName() <<endl;
    yourVector[5] = inlab("Kim");   // 왜 추가가 되어도 길이가 3일까? 코드를 보니까 오퍼레이터 [] 는 길이값 n을 수정하는 코드가 담겨있지 않음.
    cout << yourVector[5].getName()<< endl;
    cout<< yourVector.size()<< endl;
    
    vector<inlab*> myVector(2);
    inlab* a = new inlab("dd");
    myVector.push_back(a);
    a = new inlab("Ddd");
    myVector.push_back(a);

    cout<< myVector.size()<< endl;
    cout << myVector[3]->getName() << endl; //pointer로 지정되어있어 . 을 찍으면 오류가 발생, ->로 지정해주어야한다.

    return EXIT_SUCCESS;
    
}