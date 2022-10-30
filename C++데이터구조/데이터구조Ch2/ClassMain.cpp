#include <iostream>
#include <string>
#include "ClassSub.cpp"

using namespace std;



int main(void){
    Person person("Mary", "12-235");
    Student student("Bob", "98-764", "Math", 2012);

    cout << student.getName() << endl;
    person.print();
    student.print();
    person.changeMajor("Pysics");
    student.changeMajor("English");
}