#include <string>

using namespace std;

typedef string Elem;
class CNode{
    private:
        Elem elem;
        CNode* next;

        friend class CircleList;
};