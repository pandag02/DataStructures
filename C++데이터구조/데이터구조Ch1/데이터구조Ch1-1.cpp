#include <cstdlib>      //기본 스트림
#include <iostream>     //입출력 스트림
#include <string>

using namespace std;    //std:: 를 기본으로 설정
using std::string;

enum Day{SUN, MON, TUE, WED,THU,FRI,SAT};   //사용자 정의 타입
enum MealType{NO_PREF, REGULAR, LOW_FAT, VEGETARIAN};

struct Passenger{
    string name;
    MealType mealPref;
    bool isFreqFlyer;   //상용 고객 프로그램 참여
    string freqFlyerNo; //승객의 상용고객 넘버
};

namespace myglobals{        //관련된 이름들을 한곳에 선언 되도록 해줌, 전역 객체들을 자연스러운 그룹으로
    int cat;
    string dog = "bow bow";
}

void f(int value, int& ref){    //그냥 int는 값 복사, int&는 참조대상 그대로 할당
    value++;
    ref++;
    cout<<value<<endl;
    cout<<ref<<endl;
}

inline int min(int x, int y){   //짧은 함수, 반복문, 조건문X   
    return 0;
}


int main(){

    string author = "Samuel Clemens";
    string& penName = author;       //참조는 pointer와 다르게 초기화시 반드시 실제 변수 필요
    penName = "Mark Twain";
    std:: cout << author << endl;

    Day today= SUN;     //아까 열거해 놓은 것 중 하나의 값을 가질 수 있음
    std:: cout << today << endl;

    Passenger pass = {"John Smith", VEGETARIAN, true, "293145"};
    pass.name = "So Yeon";
    std:: cout << pass.name << endl;

    std:: cout << myglobals::dog << endl;   //이름공간 지정

    int func1, func2 = 5;
    f(5, func2);    //int&로 줄 때 변수로 전달해줘야 함.

    string s = "to be";
    typedef double dodo;    //dodo가 double 타입의 형식을 가짐
    dodo b = 3.242;
    
    int x, y;
    x = 10;
    std:: cout << "Please enter two numbers: ";
    std:: cin >> x >> y;
    int sum = x + y;
    std::cout << "Their sum is " << sum << std::endl;
    return EXIT_SUCCESS;        //성공적인 종료
}