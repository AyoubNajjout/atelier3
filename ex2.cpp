#include <iostream>
using namespace std;


class shape {
public:
float h,l;
shape(){
    float l,h;
    l=2;
    h=1.5;
}
};

class triangle: public shape {
public:

void area() {
cout<<"l'aire du triangle est "<<((l+h)/2)<<endl;
}
};

class rectangle: public shape {
public:

void area() {
cout<<"l'aire du rectangle est "<<((l*h))<<endl;
}};

main() {
triangle p1;
rectangle p2;
p1.area();
p2.area();
}
