/*
C++ Multilevel Inheritance
Multilevel inheritance is a process of deriving a class from another derived class.
When one class inherits another class which is further inherited by another class, 
it is known as multi level inheritance in C++. 
            A
            |
            B
            |
            C
Inheritance is transitive so the last derived class acquires all the members of all its base classes.
*/

#include<bits/stdc++.h>
using namespace std;

class Vehicle {
    public:
    void speed() {
        cout<<"All vehicles have good speed\n";
    }
};

class Car : public Vehicle {
    public:
    void distance() {
        cout<<"All Car covered good distance\n";
    }
};

class Engine : public Car {
    public:
    void time() {
        cout<<"All engines have good running time\n";
    }
};

int main() {
    Engine E;
    E.time();
    E.distance();
    E.speed();
    return 0;
}