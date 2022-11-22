#include<iostream>
using namespace std ;
class MyClass {
public:
// constructeur de la classe MyClass
MyClass();
// destructeur de la classe MyClass
~MyClass();
};
// definition du constructeur
MyClass::MyClass(){
cout << "constructeur" <<endl;
}
// definition du destructeur
MyClass::~MyClass(){
cout << "destructeur"; 
}
main(){
// creation de l'objet
MyClass c1;
}
