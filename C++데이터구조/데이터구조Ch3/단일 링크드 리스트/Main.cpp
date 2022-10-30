#include <iostream>
#include <string>
#include "StringLinkedList.cpp"

using namespace std;

int main(void){
    StringLinkedList L;

    while(true){
        cout << "1: 앞에 데이터 추가, 2: 뒤에 데이터 삭제, 3: 끝내기" <<endl;
    
        int choi = 0; 
        cin >> choi;
        string some;
        if(choi == 1){
            
            cout << "추가할 데이터를 입력해주세요: ";
            cin >> some;
            L.addFront(some);
            cout << L.front() <<" 입력 되었습니다."<<endl;
        }

        else if(choi ==2){  //원래 오류가 안나야 정상인 코드 왜 나는지 알아보기 
            cout << "삭제된 데이터: "<< L.front()<< endl;
            L.removeFront();
            cout <<"현재 가장 첫번째 값: "<< L.front()<<endl; //우리 바보 친구 아무것도 없는데 첫번째꺼 프린트하려면 오류가 나겠죠??
            
            
            
        }
        else if(choi ==3){
            break;
        }
        else{
            cout << "1,2,3 중 하나의 숫자를 입력해주세요.";
            continue;
        }

    }

    
}