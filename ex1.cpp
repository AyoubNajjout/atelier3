#include <iostream>
using namespace std;
// la class mere nommée mere
class mere {
public:
void display(){
cout<<"je suis la classe mere"<<endl;
}
};
//la class fille nommée fille
class fille: public mere {
public:
void display() {
cout<<" je suis la classe fille"<<endl;
}
};
main() {
fille f;
f.display();
mere m;
m.display();
}
