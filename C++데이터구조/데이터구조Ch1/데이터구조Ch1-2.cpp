//연산자 오버로딩
#include <iostream>

using namespace std;

class Point{
    private:
        int x,y;

    public:
        Point(int x_, int y_){
            x = x_;
            y = y_;
        }

        void print(){
            cout << "x: " << x << ", y: " << y<< endl;
        }
        Point operator + (Point& p){    //공식을 만들어서 연산자를 쓰는 순간 작성한다.
            x = x+ p.x;
            y =y+ p.y;
            return Point(x,y);
        }

};

int main(void){
    Point p1 = {1,1};
    Point p2(2,2);

    Point p3 = p1 +p2;  //원래 연산자만 쓴다면 불가능한 공식

    p3.print();

    return 0;
    
}