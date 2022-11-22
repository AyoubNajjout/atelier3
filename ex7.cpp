#include<iostream>
#include<cmath>
using namespace std;
//la classe nommé vecteur3d 
class vecteur3d {
//les attributs de la classe vecteur3d
    private:
    float x,y,z;

//les méthodes de la classe vecteur3d
    public:
//constructeur avec paramètres 
    vecteur3d(float a = 0, float b = 0, float c = 0) {
        x=a;
        y=b;
        z=c;
    }
    
//Constructeur par recopie
    vecteur3d(const vecteur3d &v) {
        x = v.x;
        y = v.y;
        z = v.z;        
    }
    
//la fonction qui affiche le vecteur
    void afficher() {
        cout << "("<<x<<","<<y<<","<<z<<")" << endl;
    }
    
//La somme des deux vecteur
    vecteur3d somme(const vecteur3d &v) {
         return vecteur3d(x+v.x, y+v.y, z+v.z);
         
    }
    
//Le produit scalaire des deux vecteurs
    float produit(const vecteur3d &v) {
        return x*v.x + y*v.y + z*v.z;
    }
    
//tester si deux vecteurs ont les mêmes composantes
    bool coincid(const vecteur3d &v) {
        return (x == v.x && y == v.y && z == v.z);
    }
    
//Retourner la norme du vecteur
    float norme() {
        return sqrt(x*x + y*y + z*z);
    }
    
//Retourner le vecteur qui la plus grande norme par valeur
    vecteur3d normax(vecteur3d v) {
        if( this->norme() > v.norme())
            return *this;
        return v;
    }
    
//Retourner le vecteur qui la plus grande norme par adresse
    vecteur3d *normax(vecteur3d *v) {
        if( this->norme() > v->norme())
            return this;
            return v;
    }
    
//Retourner le vecteur qui la plus grande norme par référence
    vecteur3d &normaxr(vecteur3d &v) {
        if( this->norme() > v.norme())
            return *this;
            return v;
    }
};
int main() {
    vecteur3d v1(4,5,2);
    vecteur3d v2(9,6,1);
    cout << "vecteur v1 : ";
    v1.afficher();
    cout << "vecteur v2 : ";
    v2.afficher();
    cout<<endl;
    cout << "La somme des vecteurs v1 et v2 est : ";
    (v1.somme(v2)).afficher();
    cout<<endl;
    cout << "Le produit scalaire des vecteurs v1 et v2 est : " <<  
    v1.produit(v2) << endl;
    cout<<endl;
	cout<<"la norme de v1 est: "<<v1.norme()<<endl;
	cout<<"la norme de v2 est: "<<v2.norme()<<endl;
	cout<<endl;
    if(v1.coincid(v2))
        cout << "Les vecteurs v1 et v2 coincident " << endl; 
    else
        cout << "Les vecteurs v1 et v2 ne coincident pas " << endl;
    cout<<endl;
    cout << "Le vecteur qui a la plus grande norme par valeur est : ";
    (v1.normax(v2)).afficher();
    cout << "Le vecteur qui a la plus grande norme par adresse est : ";
    (v1.normax(&v2))->afficher();
    cout << "Le vecteur qui a la plus grande norme par reference est  :";
    (v1.normaxr(v2)).afficher();
    cout<<endl;
}
