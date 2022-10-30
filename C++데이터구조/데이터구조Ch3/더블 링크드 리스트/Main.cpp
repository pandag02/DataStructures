#include "DLinkedList.cpp"
#include <iostream>

using namespace std;



int main(void){
    DLinkedList D;

    while(true){
        cout << "1: 앞에 데이터 추가, 2: 뒤에 데이터 추가, 3: 앞에 데이터 삭제, 4: 뒤에 데이터 삭제, 5: 끝내기" <<endl;
        //노드 추가/삭제 인덱스를 바탕으로 만들기
        
        int choi = 0; 
        cin >> choi;
        string some;

        switch (choi)
        {
        case 1:
            cout << "추가할 데이터를 입력해주세요: ";
            cin >> some;
            D.addFront(some);
            cout << D.back() <<" 입력 되었습니다."<<endl;
            break;

        case 2:
            cout << "추가할 데이터를 입력해주세요: ";
            cin >> some;
            D.addBack(some);
            cout << D.back() <<" 입력 되었습니다."<<endl;
            break;
        
        case 3:
            cout << "삭제할 데이터: " << D.front()<<endl;
            D.removeFront();
            D.show();
            break;

        case 4:
            cout << "삭제할 데이터: " << D.back()<<endl;
            D.removeBack();
            D.show();
            break;

        case 5:
            return 0;

        default:
            break;
        }

    }



    return 0;
}