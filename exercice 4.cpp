#include<iostream>
using namespace std;
class mere {                 
public:
	string nom;

public:                         
	void display(){
		cout << "je suis la mere " << nom;
	}
};
class fille :public mere {         
public: 
	string Nom;


	void display() {                  
		cout << "je suis la fille"<<Nom;

	}
};
int main() {
	string s;
	fille fille1;           
	
	fille1.display();         

}
