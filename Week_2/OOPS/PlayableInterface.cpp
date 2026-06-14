#include <iostream>
using namespace std;

class Playable {
public:
    virtual void play() = 0;  // Pure virtual function
};

class Veena : public Playable {
public:
    void play() override {
        cout << "Playing Veena" << endl;
    }
};

class Saxophone : public Playable {
public:
    void play() override {
        cout << "Playing Saxophone" << endl;
    }
};

int main() {
    Veena veena;
    veena.play();
    Saxophone saxophone;
    saxophone.play();
    Playable* p;
    p = &veena;
    p->play();
    p = &saxophone;
    p->play();
    return 0;
}