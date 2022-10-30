#include<iostream>
#include <string>

class Person{
    private:
        std::string name;
        std::string idNum;

    public:
        Person(const std::string& nm, const std::string& id) : name(nm), idNum(id){};
        void print();
        std::string getIdNum();
        std::string getName();
};

class Student : public Person{  ///public 은 공용 상속이라는 의미, Student 는 유도된 클래스이다
    private: 
        std::string name;
        std::string major;
        std::string idNum;
        int gradeYear;

    public:
        Student(const std::string setName, const std::string setIdNum, const std::string setMajor, int setGradeYear) : Person(name, idNum){};
        void print();
        void changeMajor(const std::string& newMajor);
};