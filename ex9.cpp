#include<iostream>
using namespace std;

//la classe test
class test {

//les attributs de la classe test
     public : 
    static int count; 
//méthodes de la classe test
    int call(){
        count++;
      }
    
};
int test :: count = 0;
 main(){
    test a,b,c,d,e;
    a.call();
    b.call();
    c.call();
    d.call();
    e.call();
    cout<<test::count<<endl;
}
