#include <iostream>
#include <cmath>
using namespace std;

class complexe {

    public:
    float r,img;

        complexe(){};
        complexe(float r,float img){
           
            this->r=r;
            this->img=img;
        }
  
        void afficher(){
            if (img>=0)
            cout<<r<<"+"<<img<<"i"<<endl;
            else
            cout<<r<<""<<img<<"i"<<endl;
            
        }

        void operator+(complexe a){
            complexe c; 
            c.r = r+a.r;
            c.img= img+ a.img;
            c.afficher();
        }


        void operator-(complexe a){
            complexe c; 
            c.r = r-a.r;
            c.img= img - a.img;
            c.afficher();
        }


        void operator*(complexe a){
            complexe c; 
            c.r= r*a.r - img* a.img;
            c.img =r *a.img+ img*a.r;
            c.afficher();
        }



        void operator/(complexe a){
            complexe c; 
            c.r= (r*a.r + img* a.img)/(pow(a.r,2)+pow(a.img,2)) ;
            c.img = -(r *a.img - img*a.r)/(pow(a.r,2)+pow(a.img,2)) ;
            c.afficher();
        }
};
 main(){
    float i,j,x,y;
    cout<<"entrez le premier nombre reel :";cin>>i;
    cout<<"entrez le premier nombre imaginaire :";cin>>j;
    cout<<"entrez le deuxieme nombre reel :";cin>>x;
    cout<<"entrez le deuxieme nombre imaginaire :";cin>>y;
    complexe a(i,j);
    complexe b(x,y);
    
  cout<<"a + b : ";a+b;
  cout<<"a - b : ";a-b;
  cout<<"a x b : ";a*b;
  cout<<"a / b : ";a/b;

    }
