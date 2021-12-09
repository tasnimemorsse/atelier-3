#include <iostream>
using namespace std;

class Personne {
	private:
		string nom;
		string prenom;
		string dat;
	public:
		Personne(string n, string p, string d){
			this->nom=n;
			this->prenom=p;
			this->dat=d;
		}
	virtual void afficher() {
		cout <<"le nom: "<<nom<<" le prenom : "<<prenom<<"  la Date de naissance:"<<dat;
	}
};
class Employe:public Personne {
	protected:
		float salaire;
	public:
		Employe(string n, string p, string d, float s):Personne(n,p,d) {
			this->salaire=s;
		}
	virtual void afficher() {
		Personne::afficher();
		cout <<" le Salaire : "<<salaire;
	}
};
class Chef:public Employe{
	protected:
		string service;
	public: 
		Chef(string n, string p, string d, float s, string ser):Employe(n,p,d,s){
			this->service=ser;
		}
	virtual void afficher(){
		Employe::afficher();
		cout<<" service : "<<service;
	}
};
class Directeur:public Chef{
	protected:
		string societe;
	public:
		Directeur(string n, string p, string d, float s, string ser, string soc):Chef(n,p,d,s,ser){
			this->societe=soc;
		}
	void afficher(){
		Chef::afficher();
		cout<<" societe: "<<societe;
	}
};
	

int main(){
	int i;
	Personne *p[4];
	p[0]=new Personne("alami","amine","05/22/1998");
	p[1]=new Employe("riyani","alex","22/01/2004",7000);
	p[2]=new Chef("annis","adil","05/12/2000",100000,"Chef de societe  ");
	p[3]=new Directeur("aliyani","ali","09/12/1994",190000,"Directeur","C-G");
	for(i=0;i<4;i++)
    {
    	p[i]->afficher();
		cout << "\n";		
	}
	
}

