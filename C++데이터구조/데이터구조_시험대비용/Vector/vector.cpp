#include <vector>
#include <iostream>
#include <string>

using namespace std;

class panda{
    private:
        std::string name;
        int num;

    public:
        panda(string name, int num){
            this ->name = name;
            this ->num = num;
        }
        string getName(){
            return name;
        }
        int getNum(){
            return num;
        }
};

int main (void){

    vector<panda> myVector;
    int num = 0;

    std::cout << myVector.size() << std::endl;
    std::cout << myVector.empty() << std::endl;

    myVector.push_back(panda("dhk,,,", 2));
    std::cout << myVector.size() << std::endl;
    std::cout << myVector.front().getName() <<std::endl;
    std::cout << myVector.front().getNum() <<std::endl;
    
    cout << myVector.operator[](0).getName() <<endl; 
    //값을 출력해주는? 

    return 0;
}