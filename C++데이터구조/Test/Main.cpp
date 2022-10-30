#include<iostream>
#include<queue>
#include<string>

using namespace std;

class panda{
    private:
        string name;
        int index;
    
    public:
        panda(){};   //panda::panda 생성자일 때 이렇게 안적으면 오류남
        panda(string setName, int setIndex){name = setName; index = setIndex;};
        string getName(){return name;};
};

int main(void){
    queue<panda> myQueue;   //이게 여기 들어가네;;;

    myQueue.push(panda("AAAA", 3));    //pop 
    myQueue.push(panda("BBBB", 4));
    myQueue.push(panda("CCCC", 5));

    cout << myQueue.front().getName() << endl;
    cout << myQueue.empty()<<endl;

}
//배열을 기준으로 큐를 만들었다!
//과연 하나씩 디큐했을 때 다른 자료들이 빠진 곳을 자동으로 매울 것인가?(구현한다면 복잡도가 매우 커지게 됨)
//그렇다면 디큐할 때마다 그 마지막 객체의 포인터를 없애는게 맞지 않나?(양방향 링크드 리스트?)
//첫번째를 가르키는 포인터를 바꾸면 되잖아 --> 아 중간부터 빼는게 아닌 FIFO방식이라소 그렇구나
//자료형이 하나 남았고 front, rear 값이 모두 같은 것을 가르키고 마지막 배열을 가리키고 있다. 
//이럴 때 배열을 원형으로 되어있다고 생각한다(환형 링크드리스트?) --> 환형으로 구현 가능 커서가 rear값

//여기서 질문: 왜 데이터 하나를 들고 배열의 첫번째로 가면 안되는거지? 되는데 복잡도가 올라가나?

//모듈로 연산:https://ko.khanacademy.org/computing/computer-science/cryptography/modarithmetic/a/what-is-modular-arithmetic
//까먹었으면 다시 보고와  ( (N+1)mod N )

//모듈을 사용한 계산법이 존재한다. 
//원형 링크드리스트의 메소드를 사용해서 진행한다.

//더블 엔디드 큐(덱)(insetFront, insertBack, eraseFront, eraseBack) --> Push_front, Push_Back
//Back 구현은 양방향 링크드 리스트를 이용하면 편안하다.
//헤더와 테일을 이용
//설계시 객체지향 만들 때 설계해야하고 패턴 중 어댑터 패턴이 존재, 이런게 있구나~ 정도? 스택 큐 덱(Deque)을 알아봄
//기존의 자료구조를 이용해서 더 쉽게 만드는 방법 알기 코드의 재활용하기.
//단방향, 양방향, 환형, 스택, 큐 잘 정리된거 하나씩 만들어서 깃허브에 올려보자.
//외부적, 내부적 동작을 보고 만들어보자, 기존의 잘만들어진 클래스 이용해서 만들어보기 (어댑터)

//큐는 한쪽만 제가 되었다. 덱은 큐의 확장형이다.
//용어가 erase형태이다. 언어, 단어에 너무 신경쓰지말고 알자. add, insert, push/ remove, erase, pop
//배열의 연산에서 눈으로 보고 배열을 그릴 수 있어야한다.
//STL에서 덱을 라이브러리로 제공해준다.

//p2p 채팅 방식, 각자의 채팅이 안전? 블록체인과 연동 머 그렇답니다,,, 짱이네요,,리트리버, 와치독네트위크(blog.whatchdognet.com)

//덱 구현하는 코드는 양방향 링크드 리스트를 호출해서 만든다. 
//코드 재활용할 수 있게 정리해서 만들어두자. 깃허브에 올리자. 

//스택 -> 단방향, 큐는 원형, 덱은 양방향, 어댑터 --> 감싸는 방향이다. 남들이 만든것에서 내가 필요한 것을 더 추가할 뿐이다. 
//오픈소스 뜯어고치기~ 내가 하는 일이라고 합니다,,, 어댑터 패턴으로 개발해야한다. 
//스택과 큐를 이용해서도 덱을 구현할 수 있다. 

//무근본 코딩이 제일 재밌어,,