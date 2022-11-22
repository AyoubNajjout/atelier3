#include <iostream>
using namespace std;
//la classe mère : personne
class personne {
    private:
//attributs de la classe personne
    string nom , prenom;
    int day,month,year;
//méthodes de la classe personne
     public:
     personne(string n,string p,int d,int m,int y){
      nom=n;
      prenom=p;
      day=d;
      month=m;
      year=y;     
     }
//la fonction qui affiche les informations de la personne
     void afficher(){
      cout<<"nom personne: "<<nom<<endl<<"prenom personne: "<<prenom<<endl<<"date de naissance:  "<<day<<"/"<<month<<"/"<<year<<endl<<endl;
     }
     
     friend class employe;
     friend class chef;
     friend class directeur;
};
//la sous classe de la classe personne nommée employe
class employe : personne {
//attributs de la classe employe
  private:
    float salaire;
//méthodes de la classe employe
  public:
    employe(string n,string p,int d,int m,int y,float s):personne(n,p,d,m,y){
      nom=n;
      prenom=p;
      day=d;
      month=m;
      year=y; 
      salaire=s;
    }
//la fonction qui affiche les informations de l’employé
    void afficher(){
       cout<<"nom employe: "<<nom<<endl<<"prenom employe: "<<prenom<<endl<<"date de naissance : "<<day<<"/"<<month<<"/"<<year<<salaire<<" DH"<<endl<<endl;
    }
    friend class chef;
    friend class directeur;
  };
//la sous classe de la classe employe nommée chef
class chef : employe {
//attributs de la classe chef
private:
  string service;
//méthodes de la classe chef
public:
  chef(string n,string p,int d,int m,int y,float s,string se):employe(n,p,d,m,y,s){
      nom=n;
      prenom=p;
      day=d;
      month=m;
      year=y; 
      salaire=s;
      service=se;
  }
//la fonction qui affiche les informations du chef
    void afficher(){
       cout<<"nom chef: "<<nom<<endl<<"prenom chef: "<<prenom<<endl<<"date de naissance : "<<day<<"/"<<month<<"/"<<year<<endl<<"salaire : "<<salaire<<" DH"<<endl<<"service : "<<service<<endl<<endl;
    }
    friend class directeur;
 
};
//la sous classe de la classe chef nommée directeur
class directeur : chef {
//attributs de la classe directeur
private:
  string societe;
//méthodes de la classe directeur
public:
  directeur(string n,string p,int d,int m,int y,float s,string se, string so):chef(n,p,d,m,y,s,se){
      nom=n;
      prenom=p;
      day=d;
      month=m;
      year=y; 
      salaire=s;
      service=se;
      societe=so;
  }
//la fonction qui affiche les informations du directeur
    void afficher(){
       cout<<"nom directeur: "<<nom<<endl<<"prenom directeur: "<<prenom<<endl<<"date de naissance : "<<day<<"/"<<month<<"/"<<year<<endl<<"salaire : "<<salaire<<" DH"<<endl<<"service : "<<service<<endl<<"societe: "<<societe<<endl<<endl;
    }
};
  main(){
    personne p1("nom1","prenom1",11,8,1981);
    p1.afficher();
    directeur d1("nom2","nom2",1,9,1987,20000,"sevice1","societe1");
    d1.afficher(); 
  }

  
  

  
