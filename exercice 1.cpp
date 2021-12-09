#include<iostream>
using namespace std;


class Myclass {                // declaration du class avec attribut string public
public:
	string s;

public:
	Myclass(string s);        // declaration d'un constructeur qui va etre initialiser par l'utilisateur
    ~Myclass();               // declaration d'un destructeur par défaut
};

Myclass::Myclass(string s) {       // les :: pour faire une methode dehors de la class
	cout << "je suis le constructeur intialiser par " << s << endl;  // l utilisation de cout pour afficher le resultat de l utilisateur



}
Myclass::~Myclass()  {                               // les :: pour faire une methode dehors de la class
	cout << "je suis le descructeur par defaut" << endl;

	
}
int main() {                    // la declaration d' une variable
	string n;                            
	cout << "votre nom " << endl;  // donner l acces a l utilisateur pour entrer un nom
	cin >> n;
	Myclass s1(n);               // l'appel de la constructeur
	return 0;

	
}
