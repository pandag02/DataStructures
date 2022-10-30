#include"ClassHeader.h"

using namespace std;

Person::Person(std::string setName, std::string setIdNum){    //여기에다가 student까지 적으면 오류,,,상속된거 못쓴다는데?
    name = setName;
    idNum = setIdNum;
}

void Person::print(){       //Person 클래스 안에 있는 print함수
    cout << "Name: " << name<< endl;
    cout << "IdNum: " << idNum << endl;
}

std::string Person::getIdNum(){      
    return idNum;
}

std::string Person::getName(){       
    return name;
}

Student::Student(const std::string setName, const std::string setIdNum, const std::string setMajor, int setGradeYear){
    name = setName;
    idNum = setIdNum;
    major = setMajor;
    gradeYear = setGradeYear;
}

void Student::print(){       //Person 클래스 안에 있는 print함수
    cout << name << endl;
    cout << idNum << endl;
    cout << major << endl;
    cout << gradeYear << endl;
}

void Student::changeMajor(const string& newMajor){
    major = newMajor;
}
