#include "CircleList.cpp"
#include <iostream>
#include <string>


using namespace std;

int main (void){
    CircleList C;
    bool BOOL = true;;
    char num; 
    string music; 
    C.add("A");
    C.add("B");
    C.add("C");

    while(BOOL){
        cout << "------------------음악 리스트------------------"<< endl;
        cout << "1. 음악 리스트 출력,   2: 현재 재생중인 음악 출력"<< endl;
        cout << "3. 현재 음악 삭제,    4: 다음곡 듣기"<< endl;
        cout << "5. 음악 추가,        6: 다음 음악 보기"<< endl;//처음이 맨 뒤로 감
        cout << "7. 마지막곡 삭제하기,  8: 끝내기, "<<endl;

        
        cin >> num;
        
        switch (num)
        {
            case '1':
                cout<< "-------음악 리스트-------" << endl;
                C.allshow();
                break;

            case '2':
                cout<< "----현재 재생중인 음악----" << endl;
                cout << C.front() <<endl;
                break;

            case '3':
                cout<< "----삭제 완료----" << endl;
                C.remove();
                C.allshow();
                break;

            case '4':
                cout<< "--이전 마지막곡 -> 현재 마지막곡--" << endl;
                cout << C.back();
                C.advance();
                cout<< " --> "<< C.back();
                break;

            case '5':
                cout<< "추가할 음악 제목: ";
                cin >> music;
                C.add(music);

            case '6':
                cout<< "-----다음 음악 제목 보기-----" << endl;
                cout << C.nextshow() <<endl;
                break;

            case '8':
                cout << "종료합니다" << endl;
                BOOL = false;
                break;

            case '7':
                C.backremove();
                cout << "dhodhodho"<< endl;
                C.allshow();
                break;

        
            default:
                cout << "선택지 중 하나를 선택해주세요" << endl;
                break;
                
        }


        
    }



    return 0;
}