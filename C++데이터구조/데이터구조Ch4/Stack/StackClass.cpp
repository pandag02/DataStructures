#include <iostream>
#include <string>
#include <stack>

using namespace std;
using std::stack;
//이름과 점수를 넣을 클래스, 클래스 타입으로 스택 만들기

class putSN{
    int score;
    string name;
    public:
        void putData(int Score, string Name){
         score = Score;
         name = Name;
         
        }

    int getScore(){
        return score;
    }

    string getName(){
        return name;
    }

};

stack <putSN> myStack;

int main (void){
    int num1, num2, dataScore, score;
    string dataName, top, name;
    putSN Data = putSN();

    cout<< "몇개의 데이터를 입력하시겠습니까?" ;
    cin >> num1;

    for(int i = 0; i< num1; i++){
        
        cin >> dataName >> dataScore;
        Data.putData(dataScore, dataName);
        myStack.push(Data);
        cout << myStack.size()<<endl;
        name = Data.getName();
        score = Data.getScore();
        cout << name << score <<endl;
    
    }

    cout<< "몇개의 데이터를 추출하시겠습니까?" ;
    cin >> num2;

    for(int i = 0; i< num2; i++){
        myStack.pop();
        
        name = Data.getName();
        score = Data.getScore();
        
        cout << myStack.size()<<endl;
        cout << name << score <<endl;



    }

    

    return 0;
}



