#include "Array.cpp"
#include <iostream>

int main(void){
    Scores S(5);

    S.add(GameEntry("Andy", 100));
    S.add(GameEntry("Andy", 200));
    S.add(GameEntry("Andy", 300));
    S.add(GameEntry("Andy", 400));
    S.add(GameEntry("Andy", 500));

    cout << S.remove(0).getScore() <<endl;
    cout << S.remove(0).getScore() <<endl;
    cout << S.remove(0).getScore() <<endl;
}