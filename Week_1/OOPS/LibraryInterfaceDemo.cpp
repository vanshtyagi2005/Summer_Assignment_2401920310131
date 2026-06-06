/*
TOPIC: INTERFACE

Aim:
To develop interfaces and classes for KidUser and AdultUser
according to the given library requirements.

Description:
Create an interface LibraryUser with the methods:
1. registerAccount()
2. requestBook()

Create two classes:
1. KidUser
2. AdultUser

KidUser:
- Users below 12 years of age can register under a Kids Account.
- Can borrow only Kids category books for 10 days.

AdultUser:
- Users above 12 years of age can register under an Adult Account.
- Can borrow only Fiction category books for 7 days.

Concepts Used:
- Interface (Abstract Class)
- Pure Virtual Functions
- Inheritance
- Function Overriding
- Classes and Objects
*/
#include <iostream>
using namespace std;

class LibraryUser{
    public:
    virtual void registerAccount()=0;
    virtual void requestBook()=0;

};

class KidUser:public LibraryUser{
    public:
    int age;
    string bookType;

    void registerAccount() override{
        if (age<12){
            cout<<"You have successfully registered under a Kids Account\n";
        }
        else {
            cout<<"Sorry, Age must be less than 12 to register as a kid\n";
        }
    }
    void requestBook()override{
        if(bookType=="kids" || bookType=="Kids"){
            cout<<"Book Issued successfully, please return the book within 10 days\n";
        }
        else{
            cout<<"Oops, you are allowed to take only kids books\n";
        }
    }
};

class AdultUser:public LibraryUser{
    public:
    int age;
    string bookType;

    void registerAccount() override{
        if (age>12){
            cout<<"You have successfully registered under an Adult Account\n";
        }
        else {
            cout<<"Sorry, Age must be greater than 12 to register as a Adult\n";
        }
    }
    void requestBook() override{
        if(bookType=="fiction" || bookType=="Fiction"){
            cout<<"Book Issued successfully, please return the book within 7 days\n";
        }
        else{
            cout<<"Oops, you are allowed to take only Fiction books\n";
        }
    }
};

int main() {
    KidUser k;
    k.age = 10;
    k.registerAccount();
    k.age = 18;
    k.registerAccount();
    k.bookType = "Kids";
    k.requestBook();
    k.bookType = "Fiction";
    k.requestBook();
    cout<<"\n";
    AdultUser A;
    A.age = 5;
    A.registerAccount();
    A.age = 23;
    A.registerAccount();
    A.bookType = "Kids";
    A.requestBook();
    A.bookType = "Fiction";
    A.requestBook();
    return 0;
}