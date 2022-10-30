template<typename E> //typename == class

class Stack{
    private:
        E* S;
        int capacity;
        int t;
    
    public:
        int size() const;
        bool empty() const;
        void push(const E& e);
        
};

//T::A 테ㅁ플릿 매개변수에 의존하기에 의존이름이다. T::A 가 중첩클래스이거나 typedef 정의되면 잘돌아감.
//정적이거나 함수이면 컴파일 에러