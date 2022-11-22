#include <iostream>
using namespace std;

//la classe mère media
class media{
    protected : 
    string titre;
    public:
    virtual void imprimer(){} 
    virtual char *id(){}
};

//la classe audio fille de la classe media
class audio : public media{
    protected : 
    float duree;
    public:
    audio();
};

//la classe CD fille de la classe audio
class CD : public audio{
    private:
    float prix;
    public: 
    CD();
};

//la classe cassette fille de la classe audio
class cassette : public audio{ 
    private:
    float prix;
    public:
    cassette();
};

//la classe disque fille de la classe audio
class disque : public audio{ 
    private:
    float prix;
    public:
    disque();
};
    
//la classe livre fille de la classe media
class livre : public media{ 
    private:
    string auteur;
    public : 
    livre();
}; 


//la classe presse fille de la classe media
class presse : public media{
    protected :
    string directeur;
    public:
    presse();
};

//la classe magazine fille de la classe presse
class magazine : public presse{ 
    private:
    float prix;
    public:
    magazine();
};

//la classe journal fille de la classe presse
class journal : public presse{ 
    private:
    float prix;
    public: 
    journal();
};

//la classe revue fille de la classe presse
class revue : public presse{ 
    private:
    float prix;
    public: 
    revue();
};
