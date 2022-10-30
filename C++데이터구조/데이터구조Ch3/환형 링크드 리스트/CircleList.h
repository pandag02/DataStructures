#include "CNode.h"

class CircleList{
    public:
        CircleList();
        ~CircleList();
        bool empty() const;
        const Elem& front() const;
        const Elem& back() const;
        const Elem& nextshow() const;
        void advance();
        void add(const Elem& e);
        void remove();
        void backremove();
        void allshow();
        void prevshow();
        


    private:
        CNode* cursor;
};
