 #include <iostream>
using namespace std;

// la class mere nommée animal

class animal {
    protected:
     string nom;
     int age;
    public:
    
// la fct set_value pour déterminer le nom et l’âge de l’animal

    void set_value(int a ,string b){
        age=a;
        nom=b;
    }

};
//la sous classe d’animal : zebre
class zebre: public animal{
  public:
//la fonction qui montre les infos du zèbre
  void showz(){
      cout<<"le nom du zebre est "<<nom<<", son age est "<<age<<" et il vient de l'afrique."<<endl;
  } 
};

//la sous classe de animal : dauphin
class dauphin: public animal{
  public:
//la fonction qui montre les infos du dauphin
  void showd(){
      cout<<"le nom du dauphin est "<<nom<<" , son age est "<<age<<" et il vient de l'amerique."<<endl;
  } 
};
  
 
main() {
 zebre z;
 dauphin d;
 string n1 ="zebra";
 string n2 ="daulpho";
 z.set_value(10,n1);
 z.showz();
 d.set_value(3,n2);
 d.showd();
}
