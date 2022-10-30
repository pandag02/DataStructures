#ifndef ARRAY  
#define ARRAY

#include <string>
using namespace std;

class GameEntry{
    public:
        GameEntry(const string& n ="", int s = 0);
        string getName() const;
        int getScore() const;
    
    private:
    string name;
    int score;
};

class Scores {
    public:
        Scores(int maxEnt = 10);
        ~Scores(); //소멸자
        void add(const GameEntry& e);
        GameEntry remove(int i);
            //throw(IndexOutOfBounds);
    
    private:
        int maxEntries;
        int numEntries;
        GameEntry* entries;
};

#endif