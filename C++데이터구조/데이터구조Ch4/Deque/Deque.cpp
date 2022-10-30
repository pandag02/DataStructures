#include<iostream>
#include<string>
#include<deque>

using namespace std;
using std::deque;   //이거 의미 알아내야해




int main(void){
    deque<string> myDeque;   //이게 여기 들어가네;;;


    myDeque.push_front("AAAA");    //pop_front
    myDeque.push_back("BBBB");
    myDeque.push_front("CCCC");

    cout<< myDeque.size() <<endl;
    for(int i = 0; i < myDeque.size(); i++){
        cout << myDeque.front() << endl;    //그냥 front, back 쓰면 기존의 앞과 뒤로 출력
        cout << myDeque.back() << endl;
    }
    


}


//