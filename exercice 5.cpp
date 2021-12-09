#include<iostream>
using namespace std;
class animal {       
public:
	string name;
	float age;
public:
	void set_values(string n, float a) {        
		name = n;
		age = a;

	}
	



};
class zebra :public animal {  
public:
	string origine;
public:
	void set_origine(string o) {   
		origine = o;
	}
	
	void dispaly() {             
		cout << "le nom de zebra est :" << name << " l age de zebra est " << age << " l origine de zebra est " << origine<< endl;


	}
	
};
class dolphine :public animal {    
public:
	string origine;
public:
	void set_origine(string o) {       
		origine = o;
	}

	void dispaly() {                
		cout << "le nom de dolphine est :" << name << " l age de dolphine est " << age << " l origine dedolphine est " << origine << endl;


	}

};
int main() {
	string a;          
	float b;
	string c;
	string d;
	float e;
	string f;
	cout << "entrer le nom de zebra ";
	cin >> a;
	cout << "entrer l age de zebra ";
	cin >> b;
	cout << "entrer l origine de zebra ";
	cin >> c;
	cout << "entrer le nom de dolphine ";
	cin >> d;
	cout << "entrer l age de dolphine ";
	cin >> e;
	cout << "entrer l origine de dolphine ";
	cin >> f;

	zebra z1;                   
	z1.set_values(a,b);
	
	z1.set_origine(c);
	
	z1.dispaly();
	dolphine d1;               
	d1.set_values(d, e);

	d1.set_origine(f);

	d1.dispaly();
	return 0;

}
